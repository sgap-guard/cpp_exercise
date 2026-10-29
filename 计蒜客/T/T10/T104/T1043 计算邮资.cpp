#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n; char c; cin >> n >> c;
    int sum = 8;
    if (n > 1000)
    {
        int ex = n - 1000;
        int uni = (ex + 499) / 500;
        sum += uni * 4;
    }
    if (c == 'y')
    {
        sum += 5;
    }
    cout << sum << endl;
    return 0;
}