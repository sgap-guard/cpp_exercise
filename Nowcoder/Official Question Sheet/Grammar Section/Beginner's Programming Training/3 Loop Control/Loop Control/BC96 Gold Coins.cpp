#include <bits/stdc++.h>
#include <string>
using namespace std;

#define int long long
bool hws(long long x)
{
    string s = to_string(x);
    string S = s;
    reverse(S.begin(), S.end());
    return S == s;
}

signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (hws(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}