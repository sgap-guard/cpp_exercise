#include <bits/stdc++.h>
using namespace std;

signed main()
{
    static double a,b,r;
    cin >> a >> b;
    r = fmod(a,b);
    cout << fixed << setprecision(6) << r << endl;
    return 0;
}