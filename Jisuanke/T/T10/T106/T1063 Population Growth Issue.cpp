#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int x, n; cin >> x >> n;
    double p = 0.001;
    double cur = x * pow((1 + p), n) * 1.0;
    cout << fixed << setprecision(4) << cur << endl;
    return 0;
}