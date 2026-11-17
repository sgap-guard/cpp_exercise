#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a = 6, n; cin >> n;
    string res;
    if (n == 0)
    {
        cout << "0\n";
        return 0;
    }
    while (n > 0)
    {
        int rem = n % a;
        if (rem < 10)
        {
            res += (char)('0' + rem);
        }
        else
        {
            res += (char)('A' + rem - 10);
        }
        n = n / a;
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
    return 0;
}