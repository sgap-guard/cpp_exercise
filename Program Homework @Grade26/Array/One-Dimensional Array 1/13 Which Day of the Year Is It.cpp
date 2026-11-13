#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a, b, c; cin >> a >> b >> c;
    int sum[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int total = sum[b] + c;
    if (((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) && b > 2)
    {
        total++;
    }
    cout << total << endl;
    return 0;
}