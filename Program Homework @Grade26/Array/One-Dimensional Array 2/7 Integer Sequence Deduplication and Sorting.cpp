#include <bits/stdc++.h>
using namespace std;

static int vis[1005];
signed main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        vis[x] = 1;
    }
    int first = 1;
    for (int i = 1; i <= 1000; i++)
    {
        if (vis[i])
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
    return 0;
}