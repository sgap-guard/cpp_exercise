#include <bits/stdc++.h>
using namespace std;

signed main()
{
    char c;
    while (cin >> c)
    {
        if (isalpha(c))
        {
            cout << c << " is an alphabet." << endl;
        }
        else
        {
            cout << c << " is not an alphabet." << endl;
        }
    }
    return 0;
}