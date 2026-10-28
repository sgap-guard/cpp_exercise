#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long n; cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        cout << i * (i + 1) / 2 << endl;
    }
    return 0;
}