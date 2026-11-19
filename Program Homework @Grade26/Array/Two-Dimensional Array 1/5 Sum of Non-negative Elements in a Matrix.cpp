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
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] >= 0)
            {
                sum += a[i][j];
            }
        }
    }
    cout << sum << endl;
    return 0;
}