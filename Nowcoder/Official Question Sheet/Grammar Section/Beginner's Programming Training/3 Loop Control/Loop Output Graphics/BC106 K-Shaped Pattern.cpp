#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int x;
    while (cin >> x)
    {
        for (int i = x + 1; i >= 1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        for (int i = 2; i <= x + 1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}