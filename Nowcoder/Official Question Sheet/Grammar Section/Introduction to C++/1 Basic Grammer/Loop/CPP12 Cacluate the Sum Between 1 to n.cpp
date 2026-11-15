#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int x, sum = 0;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0) sum += i;
    }
    cout << sum << endl;
    return 0;
}