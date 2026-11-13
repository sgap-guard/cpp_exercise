#include <bits/stdc++.h>
using namespace std;

static int vis[1005];
signed main()
{
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x; cin >> x;
        vis[x] = 1;
    }
    int all = 1;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            all = 0;
            break;
        }
    }
    if (all)
    {
        cout << n << endl;
    }
    else
    {
        int first = 1;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                if (!first)
                {
                    cout << " ";
                }
                cout << i;
                first = 0;
            }
        }
        cout << endl;
    }
    return 0;
}