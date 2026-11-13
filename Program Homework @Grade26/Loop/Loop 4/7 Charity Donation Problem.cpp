#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    long long total = 0, cur = 1;
    for (int i = 1; i <= n; i++)
    {
        total += cur;
        cur *= 2;
    }
    cout << total << endl;
    return 0;
}