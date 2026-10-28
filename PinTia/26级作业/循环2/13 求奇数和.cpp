#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, sum = 0; 
    while (cin >> n && n > 0)
    {
        if (n % 2 != 0) 
        {
            sum += n;
        }
    }
    cout << sum << endl;
    return 0;
}