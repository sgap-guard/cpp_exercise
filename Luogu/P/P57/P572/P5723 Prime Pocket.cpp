#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0) return false;
    }
    return true;
}

signed main()
{
    int x; cin >> x;
    int sum = 0, cnt = 0;
    for (int i = 2; ; i++)
    {
        if (isPrime(i))
        {
            if (sum + i > x) break;
            sum += i;
            cout << i << endl;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}