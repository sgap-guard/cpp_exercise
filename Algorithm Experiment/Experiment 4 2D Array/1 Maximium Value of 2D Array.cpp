#include <bits/stdc++.h>
using namespace std;

static int a[12][18];
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
    int mx = a[0][0], ri = 0, rj = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > mx)
            {
                mx = a[i][j];
                ri = i;
                rj = j;
            }
        }
    }
    cout << ri << ',' << rj << ',' << mx << endl;
    return 0;
}