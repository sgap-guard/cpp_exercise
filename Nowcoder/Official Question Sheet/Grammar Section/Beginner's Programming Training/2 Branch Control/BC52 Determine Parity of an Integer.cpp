#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long x; 
    while (cin >> x)
    {
        if (x == 0)
            break;
        if (x % 2 == 0)
            cout << "Even" << endl;
        else
            cout << "Odd" << endl;
    }
    return 0;
}