#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, r;
    cin >> h >> r;
    static double v = 3.14159 * r * r * h;

    static int ans = ceil(20000.0 / v);
    cout << ans << endl;
    return 0;
}