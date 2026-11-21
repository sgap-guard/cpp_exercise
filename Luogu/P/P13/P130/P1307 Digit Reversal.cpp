#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long x; cin >> x;
    bool neg = x < 0;
    if (neg) x = -x;
    string s = to_string(x);
    reverse(s.begin(), s.end());
    long long res = stoll(s);
    if (neg) res = -res;
    cout << res << endl;
    return 0;
}