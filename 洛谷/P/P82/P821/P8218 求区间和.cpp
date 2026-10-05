#include <bits/stdc++.h>
using namespace std;

static int A[100005],pfX[100005];

signed main()
{
    int n; cin >> n;
    pfX[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> A[i];
        pfX[i] = pfX[i-1] + A[i];
    }
    int m; cin >> m;
    for(int i = 1; i <= m; i++)
    {
        int l,r; cin >> l >> r;
        long long ans = pfX[r] - pfX[l-1];
        cout << ans << endl;
    }
    return 0;
}
