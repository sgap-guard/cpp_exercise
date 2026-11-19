#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a[55][55];
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            if (i > 0) cout << ' ';
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}