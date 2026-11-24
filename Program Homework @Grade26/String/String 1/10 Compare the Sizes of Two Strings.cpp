#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (s1 > s2)
    {
        cout << ">" << endl;
    }
    else if (s1 < s2)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "=" << endl;
    }
    return 0;
}