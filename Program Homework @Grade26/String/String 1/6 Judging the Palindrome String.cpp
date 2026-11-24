#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    getline(cin, s);
    string b = s;
    reverse(b.begin(), b.end());
    if (s == b)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}