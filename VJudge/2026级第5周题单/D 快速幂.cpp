#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long a,b,p;
    cin >> a >> b >> p;
    long long ans = 1;
    a = a % p;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            ans = (ans * a) % p;
        }
        a = (a * a) % p;
        b /= 2;
    }
    cout << a << "^" << b << " mod " << p << "=" << ans << endl;
}