#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, m; cin >> n >> m;
    vector<string> g(n);
    for (int i = 0; i < n; i++)
    {
        cin >> g[i];
    }
    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (g[i][j] == "*")
            {
                cout << "*";
            }
            else
            {
                int cnt = 0;
                for (int d = 0; d < 8; d++)
                {
                    int x = i + dx[d],
                    y = j + dy[d];
                    if (x >= 0 && x < n && y >= 0 && y < m)
                    {
                        if (g[x][y] == '*')
                        {
                            cnt++
                        }
                    }
                }
                cout << cnt;
            }
        }
        cout << endl;
    }
    return 0;
}