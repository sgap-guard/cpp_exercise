#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                cout << " ";
            }
            cout << "*" << endl;
        }
    }
    return 0;
}