#include <bits/stdc++.h>
using namespace std;

static int a1[105][105];
static int a2[105][105];
signed main()
{
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a1[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a2[i][j];
        }
    }
    bool flag = true;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a1[i][j] != a2[i][j])
            {
                flag = false;
            }
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}