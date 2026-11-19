#include <bits/stdc++.h>
using namespace std;

static int a[35][35];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int k; cin >> k;
    while (k--)
    {
        char op;
        int x, y;
        cin >> op >> x >> y;
        x--; y--;
        if (op == 'r')
        {
            for (int j = 0; j < n; j++)
            {
                swap(a[x][j], a[y][j]);
            }
        }
        else if (op == 'c')
        {
            for (int i = 0; i < m; i++)
            {
                swap(a[i][x], a[i][y]);
            }
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > 0) cout << ' ';
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}