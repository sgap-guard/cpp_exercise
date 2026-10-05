#include <bits/stdc++.h>
using namespace std;

static int dp[1005],a[1005];

signed main()
{
    int r; cin >> r;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a[j];
        }
        for (int j = i; j >= 1; j--)
        {
            dp[j] = max(dp[j], dp[j-1]) + a[j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= r; i++)
    {
        if (dp[i] > ans)
        {
            ans = dp[i];
        }
    }
    cout << ans << endl;
    return 0;
}