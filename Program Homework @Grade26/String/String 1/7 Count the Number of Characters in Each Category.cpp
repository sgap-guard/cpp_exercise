#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    getline(cin, s);
    int a = 0, b = 0, c = 0, d = 0;
    for (char m : s)
    {
        if (islower(m)) a++;
        else if (isupper(m)) b++;
        else if (isdigit(m)) c++;
        else if (isspace(m)) d++;
    }
    cout << "小写字母=" << a << endl;
    cout << "大写字母=" << b << endl;
    cout << "数字=" << c << endl;
    cout << "空格=" << d << endl;
    return 0;
}