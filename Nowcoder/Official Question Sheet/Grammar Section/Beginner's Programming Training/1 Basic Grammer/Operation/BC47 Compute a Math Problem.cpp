#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c, int d)
{
    return (a + b - c) * d;
}

signed main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << solve(a, b, c, d) << endl;
    return 0;
}