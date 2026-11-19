#include <bits/stdc++.h>
using namespace std;

int a[55][55];
int main()
{
    int m, n; cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int x, y; cin >> x >> y;
    for (int j = 0; j < n; j++)   // 逐列交换第 x 行与第 y 行
    {
        swap(a[x][j], a[y][j]);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > 0) cout << ' ';   // 空格在前，不在后
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}