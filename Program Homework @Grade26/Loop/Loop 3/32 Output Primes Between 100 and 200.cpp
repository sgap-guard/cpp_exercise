#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    int limit = (int)sqrt(n);
    for (int i = 2; i <= limit; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int count = 0;
    for (int i = 100; i <= 200; i++)
    {
        if (isPrime(i))
        {
            cout << setw(5) << i;
            count++;

            if (count % 8 == 0)
            {
                cout << endl;
            }
        }
    }
    if (count % 8 != 0)
    {
        cout << endl;
    }
    return 0;
}