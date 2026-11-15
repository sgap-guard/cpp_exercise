#include <bits/stdc++.h>
using namespace std;

signed main()
{
    double a; char b;
    cin >> a >> b;
    long long sum = 0;
    if (b == 'y')
    {
        sum += 5;
    }
    if (a <= 1) 
    {
        a = 1;
        sum += 20;
    }
    else
    {
        int x = ceil(a - 1);
        sum += 20 + x;
    }
    cout << sum << endl;
    return 0;
}