#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    getline(cin, s);
    for (char &c : s)
    {
        if (c == '#')
        {
            break;
        }
        if (islower(c))
        {
            c = toupper(c);
        }
        else if (isupper(c))
        {
            c = tolower(c);
        }
        cout << c;
    }
    cout << endl;
    return 0;
}