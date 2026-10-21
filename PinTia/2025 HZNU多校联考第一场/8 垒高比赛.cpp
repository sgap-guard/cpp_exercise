#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n,m; cin >> n >> m;
    if ((m <= n) && ((m % 2) == (n % 2)))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}