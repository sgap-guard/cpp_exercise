#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int x; cin >> x;
    long long sum = 1;
    for (int i = 1; i <= x; i++)
    {
        sum *= i;
    }
    cout << sum << endl;
    return 0;
}