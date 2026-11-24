#include <bits/stdc++.h>
using namespace std;

static bool isPrime(int x)
{
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0) return false;
    }
    return true;
}

int main()
{
    int n; cin >> n;
    int count = 0;
    for (int i = 2; i <= n; ++i)
    {
        if (isPrime(i))
        {
            count++;
            cout << i;
            if (count % 5 == 0)
            {
                cout << " " << endl;
            }
            else
            {
                cout << " ";
            }
        }
    }
    if (count % 5 != 0)
    {
        cout << endl;
    }
    return 0;
}