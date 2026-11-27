#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "* ";
                if (j == n)
                {
                    cout << endl;
                }
            }
        }
    }
    return 0;
}