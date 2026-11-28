#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

signed main()
{
    int n; cin >> n;
    if (isPrime(n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}