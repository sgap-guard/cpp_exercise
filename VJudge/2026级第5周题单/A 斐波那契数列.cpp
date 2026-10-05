#include <bits/stdc++.h>
#define int long long
using namespace std;

long long fib[1000];

signed main()
{
    int n; cin >> n;
    fib[1] = fib[2] = 1;
    for (int i = 3; i <= 30; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    while (n--)
    {
        int a; cin >> a;
        cout << fib[a] << endl;
    }
    return 0;
}