#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string str;
    getline(cin, str);
    int a = 0, b = 0, c = 0, d = 0;
    for (char s : str)
    {
        if (isalpha(s))
            a++;
        else if (isdigit(s))
            b++;
        else if (isspace(s))
            c++;
        else
            d++;
    }
    cout << "zimu=" << a << endl;
    cout << "shuzi=" << b << endl;
    cout << "kongge=" << c << endl;
    cout << "qita=" << d << endl;
    return 0;
}