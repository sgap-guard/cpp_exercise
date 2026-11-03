#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    int cnt = 0;
    for (int five = 0; five * 5 <= n; five++)
    {
        for (int two = 0; five * 5 + two * 2 <= n; two++)
        {
            int one = n - five * 5 - two * 2;
            if (one >= 0)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}