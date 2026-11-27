#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    {
        for (int i = 0; i < n; i++)
        // 外层：控制行，i=0,1,2,...,n-1
        {
            for (int j = 0; j < n; j++)
            // 内层：控制列，j=0,1,2,...,n-1
            {
                int num;
                if (i % 2 == 0)
                {
                    num = i * n + j + 1;
                    // 偶数行：从左到右递增
                }
                else
                {
                    num = i * n + (n - j);
                    // 奇数行：从右到左递增
                }
                cout << setw(5) << num;
                // 输出当前数字，宽度为5个字符，左对齐
            }
            cout << endl;
        }
    }
    return 0;
}