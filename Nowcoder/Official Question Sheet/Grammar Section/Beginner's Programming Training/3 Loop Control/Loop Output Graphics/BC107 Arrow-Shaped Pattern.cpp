#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 1; i <= n + 1; i++)
        {
            for (int k = 0; k < 2 * (n + 1 - i); k++)
            {
                cout << " ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = n; i >= 1; i--)
        {
            for (int k = 0; k < 2 * (n + 1 - i); k++)
            {
                cout << " ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}