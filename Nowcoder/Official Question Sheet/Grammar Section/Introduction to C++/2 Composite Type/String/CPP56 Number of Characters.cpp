#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s; cin >> s;
    int cnta = 0, cntb = 0, cntc = 0;
    for (char c : s)
    {
        if (c == 'a') cnta++;
        else if (c == 'b') cntb++;
        else if (c == 'c') cntc++;
    }
    cout << cnta << " " << cntb << " " << cntc << endl;
    return 0;
}