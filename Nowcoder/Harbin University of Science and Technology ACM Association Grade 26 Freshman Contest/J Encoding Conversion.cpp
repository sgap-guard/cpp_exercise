#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s; cin >> s;
    for (char c : s)
    {
        int A = int(c);
        if (A >= 97 && A < 123)
        {
            int a = A - 32;
            cout << a << " ";
        }
        else if (A >= 65 && A < 91)
        {
            int b = A + 32;
            cout << b << " ";
        }
        else if (A >= 48 && A < 58)
        {
            for (int i = 7; i >= 0; i--)
            {
                cout << ((A >> i) & 1);
            }
            cout << " ";
        }
        else
        {
            cout << setfill('0') << setw(2) << uppercase << hex << A << " ";
        }
    }
    return 0;
}