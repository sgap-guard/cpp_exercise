#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, day = 0, k = 1; cin >> n;
    long long sum = 0;
    while (day < n)
    {
        for (int i = 1; i <= k; i++)
        {
            day++;
            sum += k;
            if (day == n)
            {
                cout << sum << endl;
                break;
            }
        }
        k++;
    }
    return 0;
}