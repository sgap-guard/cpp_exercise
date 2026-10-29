#include <bits/stdc++.h>
using namespace std;
static long long a[100005],sum[100005];
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++)
    {
        int l,r; cin >> l >> r;
        cout << sum[r] - sum[l - 1] << endl;
    }
    return 0;
}