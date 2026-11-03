#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int n, sum = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i %2 == 0)
        {
            sum += i * (-1);
        }
        else
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}