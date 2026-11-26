#include <bits/stdc++.h>
using namespace std;

signed main()
{
    double x; cin >> x;
    if (x > 0)
    {
        cout << "y = "<< x << endl;
    }
    else if (x < 0)
    {
        cout << "y = " << -x << endl;
    }
    else
    {
        cout << "y = " << "0" << endl;
    }
}