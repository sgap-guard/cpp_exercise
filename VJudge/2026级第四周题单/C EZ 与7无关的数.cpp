#include <iostream>
#include <string>
using namespace std;

// 定义全局前缀和数组，大小为 10^6 + 5
// 全局数组存储在静态区，避免栈溢出，且默认自动初始化为 0
// 使用 long long 防止平方和溢出（最大约 3.33e17）
long long arr[1000005];

// 辅助函数：判断数字字符串中是否包含字符 '7'
bool has7(const string &s)
{
    // 遍历字符串的每一个字符
    for (char c : s)
    {
        // 如果发现字符 '7'，则包含
        if (c == '7')
        {
            return true;
        }
    }
    // 遍历完毕未发现 '7'
    return false;
}

int main()
{
    // 初始化边界条件：0 以内没有正整数，与 7 无关的数和为 0
    arr[0] = 0;

    // 预处理阶段：从 1 遍历到 10^6
    // 利用前缀和思想，arr[i] 存储 1 到 i 中所有与 7 无关的数的平方和
    for (int i = 1; i <= 1000000; i++)
    {
        // 判断条件：不能被 7 整除 且 十进制表示中不含数字 7
        if (i % 7 != 0 && !has7(to_string(i)))
        {
            // 如果满足条件，累加当前数的平方
            // (long long)i * i 强转防止 i * i 在 int 下溢出
            arr[i] = arr[i - 1] + (long long)i * i;
        }
        else
        {
            // 如果与 7 相关，则不累加，直接继承前一项的值
            arr[i] = arr[i - 1];
        }
    }

    // 读取测试用例的数量 T
    int T;
    cin >> T;

    // 循环处理每一个测试用例
    while (T > 0)
    {
        T--; // 递减计数器
        
        // 读取当前测试用例的 N
        int n;
        cin >> n;
        
        // 直接通过前缀和数组 O(1) 输出结果
        cout << arr[n] << endl;
    }

    // 程序正常结束
    return 0;
}