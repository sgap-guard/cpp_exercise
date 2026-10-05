#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    for (int k = t; k > 0; k--)
    {
        int n; cin >> n;
        int i = 2;
        bool first = true;

        while (i * i <= n)
        {
            while (n % i == 0)
            {
                if (first == false)
                {
                    cout << "*";
                }
                cout << i;
                first = false;
                n /= i;
            }
            i++;
        }
        if (n > 1)
        {
            if (first == false)
            {
                cout << "*";
            }
            cout << n;
        }
        cout << endl;
    }
    return 0;
}