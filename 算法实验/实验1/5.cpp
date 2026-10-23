#include <bits/stdc++.h>
using namespace std;
signed main()
{
    char ch,res;  cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        res = ch + 32;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        res = ch - 32;
    }
    else
    {
        res = ch;
    }
    cout << res << endl;
    return 0;
}