#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int x;
    while (cin >> x)
    {
        for (int i = x; i >= 1; --i)
        {
            for (int j = 1; j <= i; ++j)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}