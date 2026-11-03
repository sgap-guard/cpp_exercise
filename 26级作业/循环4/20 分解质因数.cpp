#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n; cin >> n;
    long long org = n;
    bool first = true;
    cout << org << "=";
    long long i = 2;
    while (i * i <= n)
    {
        while (n % i == 0)
        {
            if (!first) 
            {
                cout << "*";
            }
            cout << i;
            first = false;
            n /= i;
        }
        i++;
    }
    if (n > 1)
    {
        if (!first) 
        {
            cout << "*";
        }
        cout << n;
    }
    cout << endl;
    return 0;
}