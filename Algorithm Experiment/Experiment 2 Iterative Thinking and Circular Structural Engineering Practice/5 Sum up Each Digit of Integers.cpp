#include <bits/stdc++.h>
using namespace std;

signed main()
{
    cout << "2604090112 刘佳林" << endl;
    int a; cin >> a;
    bool is_neg = false;
    if (a < 0) 
    {
        a = -a;
        is_neg = true;
    }
    string s = to_string(a);
    int sum = 0;
    for (char c : s)
    {
        sum += c - '0';
    }
    if (is_neg == true) cout << "-";
    cout << sum << endl;
    return 0;
}