#include <bits/stdc++.h>
using namespace std;

bool hasDigit(int a)
{
    int tmp = a;
    if (tmp < 0)
    {
        tmp = -tmp;
    }
    while (tmp != 0)
    {
        int digit = tmp % 10;
        if (digit == 4)
        {
            return true;
        }
        tmp = tmp / 10;
    }
    return false;
}

signed main()
{
    long long n; cin >> n;
}