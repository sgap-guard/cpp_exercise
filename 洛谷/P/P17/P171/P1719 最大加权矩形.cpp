#include <bits/stdc++.h>
using namespace std;
#define int long long

static int A[125][125], b[125];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }

    long long MaxSum = -1e18;

    // 枚举上边界 i
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n; k++)
        {
            b[k] = 0;
        }
        
        for (int j = i; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                b[k] += A[j][k];
            }
            
            long long dp = 0;
            for (int k = 1; k <= n; k++)
            {
                dp = max(dp + b[k], b[k]);
                if (dp > MaxSum)
                {
                    MaxSum = dp;
                }
            }
        }
    }
    cout << MaxSum << '\n';
    return 0;
}