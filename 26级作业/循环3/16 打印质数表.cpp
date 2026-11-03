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
    int n; cin >> n;
    bool first = true;
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            if (!first)
            {
                cout << " ";
            }
            cout << i;
            first = false;
        }
    }
    cout << endl;
    return 0;
}