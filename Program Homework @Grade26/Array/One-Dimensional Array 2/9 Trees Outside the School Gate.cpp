#include <bits/stdc++.h>
using namespace std;

static int vis[10005];
signed main()
{
    int l, m; cin >> l >> m;
    for (int i = 0; i < m; i++)
    {
        int l, r; cin >> l >> r;
        for (int j = l; j <= r; j++)
        {
            vis[j] = 1;
        }
    }
    int total = l + 1;
    int remove = 0;
    for (int i = 0; i <= l; i++)
    {
        if (vis[i] == 1)
        {
            remove++;
        }
    }
    cout << total - remove << endl;
    return 0;
}