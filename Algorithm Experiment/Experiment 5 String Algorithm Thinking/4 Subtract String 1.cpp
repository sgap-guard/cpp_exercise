#include <bits/stdc++.h>
using namespace std;

signed main()
{
    cout << "刘佳林 2604090112" << endl;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int a = 0, b = 0;
    for (char c : s1)
    {
        if (isdigit(c)) a++;
    }
    for (char c : s2)
    {
        if (isdigit(c)) b++;
    }
    cout << a - b << endl;
    return 0;
}