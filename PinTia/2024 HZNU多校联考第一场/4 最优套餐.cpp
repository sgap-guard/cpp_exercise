#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin >> n;
    int min_price = 1001;
    for (int i = 1; i <= n; i++)
    {
        int p;
        cin >> p;
        if (p < min_price)
        {
            min_price = p;
        }
    }
    cout << min_price << endl;
    return 0;
}
