#include <bits/stdc++.h>
using namespace std;

static int a[10][10], sum[10];
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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i] += a[i][j];
        }
        cout << sum[i] << endl;
    }
    return 0;
}