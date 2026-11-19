#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n; cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        int mx = a[0][j];
        for (int i = 1; i < m; i++)
        {
            if (a[i][j] > mx)
            {
                mx = a[i][j];
            }
        }
        if (j > 0) cout << ' ';
        cout << mx;
    }
    cout << endl;
    return 0;
}