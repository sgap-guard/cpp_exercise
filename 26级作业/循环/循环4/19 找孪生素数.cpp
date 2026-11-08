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
    int n, m; cin >> n >> m;
    for (int i = n; i <= m - 2; i++)
    {
        if (isPrime(i) && isPrime(i + 2))
        {
            cout << "(" << i << "," << i + 2 << ") ";
        }
    }
    cout << endl;
    return 0;
}