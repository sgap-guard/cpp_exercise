#include <bits/stdc++.h>
using namespace std;

static long long dp[1005];


signed main()
{
    // 读取输入的整数 n
    int n;
    cin >> n;

    // 初始化 dp 数组的边界值
    // dp[0] = 0：长度为 0 的数列不存在，个数为 0（其实用不到，但为了完整性写上）
    // dp[1] = 1：只有 1 本身这一种数列
    dp[0] = 0;
    dp[1] = 1;

    // ========== 递推计算 dp[2] 到 dp[n] ==========
    for (int x = 2; x <= n; x++)
    {
        // 只有 x 本身这一种数列，先算作 1 个
        dp[x] = 1;

        // 在 x 后面接上以 y 结尾的数列
        // y 的取值范围：1 到 x/2（因为 y 不能超过 x 的一半）
        for (int y = 1; y <= x / 2; y++)
        {
            // 累加以 y 结尾的合法数列个数
            // 数学含义：dp[x] = 1 + sum(dp[y])，y 从 1 到 x/2
            dp[x] = dp[x] + dp[y];
        }
    }

    // 输出以 n 结尾的合法数列总数
    cout << dp[n] << endl;

    return 0;
}