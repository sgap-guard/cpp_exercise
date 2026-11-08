#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int h; cin >> h;
    for (int i = 1; i <= h; i++)
    {
        cout << "*";
        if (i > 1 && i < h)
        {
            for (int j = 1; j <= i - 2; j++)
            {
                cout << " ";
            }
            cout << "*";
            for (int j = 1; j <= h - i - 1; j++)
            {
                cout << " ";
            }
        }
        else if (i == 1 || i == h)
        {
            for (int j = 1; j <= h - 2; j++)
            {
                cout << " ";
            }
        }
        cout << "*" << endl;
    }
    return 0;
}