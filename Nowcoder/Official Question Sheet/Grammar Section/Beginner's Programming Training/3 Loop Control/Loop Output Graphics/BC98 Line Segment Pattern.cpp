#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "*";
            if (i == n)
            {
                cout << endl;
            }
        }
    }
    return 0;
}