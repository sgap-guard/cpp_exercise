#include <bits/stdc++.h>
using namespace std;

signed main()
{
    for (int x = 0; x <= 30; x++)
    {
        int y = 30 - x;
        if (2 * x + 4 * y == 90)
        {
            cout << "x = " << x << ", y = " << y << endl;
        }
    }
    return 0;
}
