#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, odd = 0, even = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) even++;
        else odd++;
    }
    cout << odd << " " << even << endl;
    return 0;
}