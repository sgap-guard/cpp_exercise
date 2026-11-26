#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isNM(int n)
{
    string s = to_string(n);
    if (s[0] != '2' || s.back() != '2') return false;
    int sum = 0;
    for (char c : s)
    {
        sum += c - '0';
    }
    return sum % 2 == 0;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while (T--)
    {
        int l, r;
        cin >> l >> r;
        int cnt = 0;
        for (int i = l; i <= r; i++)
        {
            if (isNM(i)) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}