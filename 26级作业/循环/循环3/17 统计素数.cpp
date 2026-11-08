#include <iostream>
using namespace std;

bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

signed main()
{
    int m, n; cin >> m >> n;
    int cnt = 0;
    for (int i = m; i <= n; i++)
    {
        if (isPrime(i))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}