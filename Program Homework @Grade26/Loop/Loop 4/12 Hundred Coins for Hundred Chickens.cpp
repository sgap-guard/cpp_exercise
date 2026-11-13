#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    while (cin >> n)
    {
        if (n < 0)
        {
            break;
        }
        for (int r = 0; r <= n / 5; r++)
        {
            for (int h = 0; h <= (n - r * 5) / 3; h++)
            {
                int c = n - r - h;
                if (c %3 == 0)
                {
                    int sum = r * 5 + h * 3 + c / 3;
                    if (sum == n)
                    {
                        cout << r << " " << h << " " << c << endl;
                    }
                }
            }
        }
    }
    return 0;
}