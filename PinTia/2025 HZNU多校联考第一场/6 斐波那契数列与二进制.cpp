#include <bits/stdc++.h>
using namespace std;

static int dp[1000];

signed main()
{
    dp[1] = 1, dp[2] = 1;
    int n; cin >> n;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    int temp = dp[n],cnt = 0;
    while (temp > 0)
    {
        if (temp % 2 == 0)
        {
            cnt++;
        }
        temp /= 2;
    }
    cout << cnt << endl;
}