#include <bits/stdc++.h>
using namespace std;

static int h1[5],h2[5],m1[5],m2[5],h,m;

signed main()
{
    for (int i = 1; i <= 3; i++)
    {
        cin >> h1[i] >> m1[i] >> h2[i] >> m2[i];
    }
    int sum = 60 * h2[1] + m2[1] 
            - 60 * h1[1] - m1[1]
            + 60 * h2[2] + m2[2]
            - 60 * h1[2] - m1[2]
            + 60 * h2[3] + m2[3]
            - 60 * h1[3] - m1[3];
    h = sum / 60;
    m = sum % 60;
    cout << h << " " << m << endl;
    if (sum >= 240)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;    
    }
    return 0;
}