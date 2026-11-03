#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, step = 0; cin >> n;
    while (n != 1)
    {
        if (n %2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        step++;
    }
    cout << step << endl;
}