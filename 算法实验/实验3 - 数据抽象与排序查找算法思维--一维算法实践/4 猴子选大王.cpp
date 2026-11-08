// 数学做法
// #include <iostream>
// using namespace std;

// int main() 
// {
//     int n; cin >> n;
//     int ans = 0; // f(1)=0
//     for (int k = 2; k <= n; k++)
//     {
//         ans = (ans + 3) % k;
//         // 约瑟夫环
//     }
//     cout << ans + 1 << endl;   // 转成 1~N 编号
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[1005] = {0};        // 0=淘汰, 1=还在圈里
    for (int i = 1; i <= n; i++)
    {
        a[i] = 1;            // 初始都在圈里
    }
    int remain = n;          // 剩余猴子数
    int count = 0;           // 报数计数器
    int i = 1;               // 当前位置
    while (remain > 1)
    {
        if (a[i] == 1)
        {
            count++;
            if (count == 3)
            {
                a[i] = 0;    // 淘汰
                remain--;
                count = 0;   // 重置报数
            }
        }
        i++;
        if (i > n) i = 1;    // 绕回开头，模拟"圈"
    }
    // 找最后剩下的那只
    for (int j = 1; j <= n; j++)
    {
        if (a[j] == 1)
        {
            cout << j << endl;
            break;
        }
    }
    return 0;
}