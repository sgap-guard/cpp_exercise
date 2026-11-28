#include <bits/stdc++.h>
using namespace std;
#define int long long

static int a[20][20], b[20][20];
signed main()
{
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> b[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] != b[i][j])
            {
                cout << "No" << endl;
                return 0;
            }
    cout << "Yes" << endl;
    return 0;
}