#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

signed main()
{
    int cnt = 0;
    for (int i = 100; i <= 999; i++)
    {
        if (isPrime(i)) cnt++;
    }
    cout << cnt << endl;
    return 0;
}