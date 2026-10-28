#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long n; cin >> n;
    long long ans = 0;
    while (n > 0)
    {
        int dig = n % 10;
        ans = ans * 10 + dig;
        n /= 10;
    }
    cout << ans << endl;
    return 0;
}