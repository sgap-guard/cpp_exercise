#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n; cin >> n;
    int bike, walk;
    bike = 27 + 23 + (n / 3.0);
    walk = n / 1.2;
    if (bike > walk)
        cout << "Walk" << endl;
    else if (bike == walk)
        cout << "All" << endl;
    else
        cout << "Bike" << endl;
    return 0;
}