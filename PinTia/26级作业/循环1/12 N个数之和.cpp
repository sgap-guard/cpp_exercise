#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n, sum = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int j; cin >> j;
        sum += j;
    }
    cout << sum << endl;
    return 0;
}