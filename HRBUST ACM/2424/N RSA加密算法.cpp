#include <bits/stdc++.h>
using namespace std;

signed main()
{
    // 读取测试用例数 t
    int t;
    cin >> t;

    // 循环 t 次，每次处理一个整数 n
    for (int c_num = 1; c_num <= t; c_num++)
    {
        // 读取当前测试用例的整数 n
        int n;
        cin >> n;

        // ✅ 保存原始 n，用于输出前缀 "n="
        // 注意：不能用 static，因为 static 只初始化一次
        int original = n;

        // 输出 "n=" 前缀
        cout << original << "=";

        // 试除法：从最小的质数 2 开始
        int i = 2;

        // first 标记是否是第一个输出的质因数
        // 用于控制 '*' 的输出：第一个质因数前不加 '*'，后面的都加
        bool first = true;

        // 试除到 sqrt(n)
        while (i * i <= n)
        {
            // 如果 i 能整除 n，则 i 是 n 的一个质因数
            while (n % i == 0)
            {
                // 如果不是第一个质因数，先输出 '*'
                if (!first)
                {
                    cout << "*";
                }

                // 输出质因数 i
                cout << i;

                // 标记第一个质因数已经输出
                first = false;

                // 更新 n
                n /= i;
            }

            // 试除下一个数
            i++;
        }

        // 如果循环结束后 n > 1，说明 n 本身是一个质数
        if (n > 1)
        {
            // 如果不是第一个质因数，先输出 '*'
            if (!first)
            {
                cout << "*";
            }

            // 输出剩余的质数 n
            cout << n;
        }

        // 换行
        cout << '\n';
    }
    return 0;
}