#include <bits/stdc++.h>
using namespace std;
static unsigned long long S[1005][1005];
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    for (long long i = 1; i <= t; i++)
    {
        long long n, m, q; cin >> n >> m >> q;
        memset(S, 0, sizeof(S));
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= m; k++)
            {
                unsigned long long val; cin >> val;
                S[j][k] = val + S[j - 1][k] + S[j][k - 1] - S[j - 1][k - 1];
            }
        }
        unsigned long long f_ans = 0;
        for (int j = 1; j <= q; j++)
        {
            long long u, v, x, y; cin >> u >> v >> x >> y;
            unsigned long long c_ans = S[x][y] - S[u - 1][y] - S[x][v - 1] + S[u - 1][v - 1];
            f_ans ^= c_ans;
        }
        cout << f_ans << endl;
    }
    return 0;
}