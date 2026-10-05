#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long a, b, p;
    cin >> a >> b >> p;
    long long original_a = a;
    long long original_b = b;

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
    cout << original_a << "^" << original_b << " mod " << p << "=" << ans << endl;
    return 0;
}