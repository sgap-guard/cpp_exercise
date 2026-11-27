#include <bits/stdc++.h>
using namespace std;

signed main()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j > 1)
            {
                cout << " ";
            }
            cout << j << "*" << i << "=" << setw(2) << j * i;
        }
        cout << endl;
    }
    return 0;
}