#include <bits/stdc++.h>
using namespace std;

static int cnt[205], fav[205];
signed main()
{
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int p; cin >> p;
        fav[i] = p;
        cnt[p]++;
    }
    for (int i = 1; i <= n; i++)
    {
        int fri = cnt[fav[i]] - 1;
        if (fri == 0)
        {
            cout << "BeiJu" << endl;
        }
        else
        {
            cout << fri << endl;
        }
    }
    return 0;
}