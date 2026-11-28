#include <bits/stdc++.h>
using namespace std;

double cal(int a, int b, int c)
{
    double up = max({a + b, b, c});
    double down = max({a, b + c, c}) + max({a, b, b + c});
    return up / down;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c; cin >> a >> b >> c;
    cout << fixed << setprecision(2) << cal(a, b, c) << endl;
    return 0;
}