#include <bits/stdc++.h>
using namespace std;

static int a[4][4], maxx[4], sum[4];
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i] += a[i][j];
            if (j == 0)
            {
                maxx[i] = a[i][j];
            }
            else
            {
                maxx[i] = max(maxx[i], a[i][j]);
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(4) << a[i][j];
        }
        cout << setw(4) << maxx[i] << setw(4) << sum[i] << endl;
    }
    return 0;
}