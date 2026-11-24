#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    getline(cin, s);
    int a, b;
    cin >> a >> b;
    for (int i = a; i < a + b; i++)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}