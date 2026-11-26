#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int x;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    int sum1 = 0, sum2 = 0;
    while (cin >> x)
    {
        if (x == -1) break;
        if (x > 0)
        { 
            cnt1++;
            sum1 += x;
        }
        else if (x < 0)
        { 
            cnt2++;
            sum2 += x;
        }
        else
        {
            cnt3++;
        }
    }
    cout << cnt1 << " " << cnt3 << " " << cnt2 << endl;
    cout << sum1 << " " << sum2 << endl;
    return 0;
}