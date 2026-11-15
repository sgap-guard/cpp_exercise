#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    for (char &c : s)
    {
        if ((c - '0') % 2 == 0)
            c = '0';
        else
            c = '1';
    }

    int ans = stoi(s);
    cout << ans << endl;
    return 0;
}
