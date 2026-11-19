#include <bits/stdc++.h>
using namespace std;

static int a[105][105];
signed main()
{
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int x, y; cin >> x >> y;
    cout << a[x - 1][y - 1] << endl;
    return 0;
}