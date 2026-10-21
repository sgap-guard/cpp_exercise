#include <bits/stdc++.h>
using namespace std;

static int a[1005];

signed main()
{
    int n, m; cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i];
    }
    int empty = n - m,
        need = 2 - empty,
        wait_time = 0;
    if (need > 0)
    {
        sort (a + 1, a + m + 1);
        wait_time = a[need];
    }
    int ans = wait_time + 20;
    cout << ans << endl;
    return 0;
}