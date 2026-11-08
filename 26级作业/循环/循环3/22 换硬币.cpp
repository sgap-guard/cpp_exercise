#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int x; cin >> x;
    int cnt = 0;
    for (int five = (x - 3) / 5; five > 0; five--)
    {
        for (int two = (x - five * 5 - 1) / 2; two > 0; two--)
        {
            int one = x - five * 5 - two * 2;
            if (one >= 1)
            {
                int total = five + two + one;
                cout << "fen5:" << five << ", fen2:" << two << ", fen1:" << one << ", total:" << total << endl;
                cnt++;
            }
        }
    }
    cout << "count = " << cnt << endl;
    return 0;
}