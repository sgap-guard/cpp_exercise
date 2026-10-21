#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long a, b, c;
    int cnt = 0, n; cin >> n;
    long long pro = 0;
    for (a = 1; a <= n / 3; a++)
    {
        for (b = a + 1; b <= n; b++)
        {
            c = n - a - b;
            if (c <= b)
            {
                break;
            }
            if (a * a + b * b == c * c)
            {
                cnt++;
                pro = a * b * c;
            }
        }
    }
    if (cnt == 0)
    {
        cout << "No Joyfine" << endl;
    }
    else if (cnt == 1)
    {
        cout << pro << endl;
    }
    else
    {
        cout << "Many" << " " << cnt << endl;
    }
    return 0;
}