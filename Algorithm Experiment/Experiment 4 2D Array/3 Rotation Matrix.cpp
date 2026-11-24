#include <bits/stdc++.h>
using namespace std;

static int a[15][15];
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > 0) cout << ' ';
            cout << a[n - 1 - j][i];
        }
        cout << endl;
    }
    return 0;
}