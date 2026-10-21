#include <bits/stdc++.h>
using namespace std;
#define int double

signed main()
{
    int Xa, Ya, Xb, Yb;
    cin >> Xa >> Ya; cin >> Xb >> Yb;
    cout << fixed << setprecision(3)
         << 1.0 * sqrt( pow(Xa - Xb,2) + pow(Ya - Yb,2)) << endl;
    return 0;
}