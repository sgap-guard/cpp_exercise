#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int x, min_r = INT_MAX, ans = 0;
    cin >> x;
    while (x != 0)
    {
        int temp = x, rev = 0;
        while (temp > 0)
        {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        if (rev < min_r)
        {
            min_r = rev;
            ans = x;
        }
        cin >> x;
    }
    cout << ans << endl;
    return 0;   
}