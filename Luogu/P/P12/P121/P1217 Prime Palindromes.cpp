#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int Fanzhuan(int n)
{
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoll(s);
}

signed main()
{
    int a, b; cin >> a >> b;
    if (b > 10000000) b = 10000000;
    for (int i = a; i <= b; i++)
    {
        if (Fanzhuan(i) == i && isPrime(i))
        {
            cout << i << endl; 
        }
    }
    return 0;
}