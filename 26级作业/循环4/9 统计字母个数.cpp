#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s; 
    getline(cin, s);
    int cnt = 0;
    for (char c : s)
    {
        if (c == '@')
        {
            break;
        }
        if (isalpha(c))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}