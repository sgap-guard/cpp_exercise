#include <bits/stdc++.h>
using namespace std;
signed main()
{
    long long n; cin >> n;
    if (n %3 == 0 && n %5 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}