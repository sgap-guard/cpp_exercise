#include <bits/stdc++.h>
using namespace std;

static int a[7][7];
signed main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    int mzx = 0, ri, rj;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (a[i][j] > mzx)
            {
                mzx = a[i][j];
                ri = i; rj = j;
            }
        }
    }
    cout << mzx << " [" << ri << "][" << rj << "]" << endl;
    return 0;
}