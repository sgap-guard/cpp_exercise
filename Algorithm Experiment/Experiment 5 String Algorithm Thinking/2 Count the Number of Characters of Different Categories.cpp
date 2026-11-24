#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a = 0, b = 0, c = 0, d = 0;
    string s;
    getline(cin, s);
    for (char ch : s)
    {
        if (isspace(ch)) a++;
        else if (isalpha(ch)) b++;
        else if (isdigit(ch)) c++;
        else d++;
    }
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}