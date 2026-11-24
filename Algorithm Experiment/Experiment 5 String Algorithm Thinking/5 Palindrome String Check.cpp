#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a;
    getline(cin, a);
    string b(a.begin(), a.end());
    reverse(b.begin(), b.end());
    if (a == b)
    {
        cout << a << " shi huiwen" << endl;
    }
    else
    {
        cout << a << " bu shi huiwen" << endl;
    }
    return 0;
}