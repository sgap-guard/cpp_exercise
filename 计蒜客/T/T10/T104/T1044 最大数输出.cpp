#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a, b, c; cin >> a >> b >> c;
    int Max = max(a, max(b, c));
    cout << Max << endl;
    return 0;
}
