#include <bits/stdc++.h>
using namespace std;

static int a[6][6], minn[4];
signed main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            minn[j] = min(minn[j], a[i][j]);
        }
    }
    for (int j = 0; j < 4; j++)
    {
        cout << minn[j] << " ";
    }
    cout << endl;
    return 0;
}