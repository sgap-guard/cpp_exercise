#include <bits/stdc++.h>
using namespace std;
#define int long long

static int a[50][50];
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    int x, y; cin >> x >> y;
    cout << a[x][y] << endl;
    return 0;
}