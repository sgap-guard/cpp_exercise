#include <bits/stdc++.h>
using namespace std;
signed main()
{
    long long n, m; cin >> n >> m;
    string a = to_string(n);
    for (int i = 0; i < m; i++)
    {
        cout << a[i];
    }
    return 0;
}