#include <bits/stdc++.h>
using namespace std;

static int a[125][125];
static long long b[125];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    long long max_sum = -1e18;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n; k++)
        {
            b[k] = 0;
        }
        for (int j = i; j <= n; j++)
        //注意这里j从i开始，因为i是矩形的上边界
        {
            for (int k = 1; k <= n; k++)
            {
                b[k] += a[j][k];
            }
            long long dp = 0;
            for (int k = 1; k <= n; k++)
            {
                if (dp > 0)
                {
                    dp += b[k];
                }
                else
                {
                    dp = b[k];
                }
                if (dp > max_sum)
                {
                    max_sum = dp;
                }
            }
        }
    }
    cout << max_sum << endl;
    return 0;
}