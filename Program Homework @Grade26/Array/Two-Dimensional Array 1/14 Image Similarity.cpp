#include <bits/stdc++.h>
using namespace std;

static int a1[305][305], a2[305][305];
int main()
{
    int m, n;
    cin >> m >> n;
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

    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a1[i][j] == a2[i][j])
            {
                cnt++;
            }
        }
    }
    double ans = (double)cnt * 100.0 / ((long long)m * n);
    cout << fixed << setprecision(2) << ans << '%' << endl;
    return 0;
}