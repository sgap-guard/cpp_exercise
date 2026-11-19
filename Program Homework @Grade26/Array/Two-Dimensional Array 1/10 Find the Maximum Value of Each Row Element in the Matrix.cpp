#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n; cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n));
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        int mx = a[i][0];
        for (int j = 1; j < n; j++)
        {
            if (a[i][j] > mx)
            {
                mx = a[i][j];
            }
        }
        cout << mx << endl;
    }
    return 0;
}