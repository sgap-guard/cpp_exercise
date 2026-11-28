#include <bits/stdc++.h>
using namespace std;
#define int long long

static int a[20][20];
signed main()
{
    int n, m; cin >> n >> m;
    int sum = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] > 0) sum += a[i][j];
        }
    cout << sum << endl;
    return 0;
}