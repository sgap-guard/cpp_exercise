#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s; cin >> s;
    int len = s.length(), sum = 0;
    for (char c : s)
    {
        sum += c - '0';
    }
    cout << len << " " << sum << endl;
    return 0;
}