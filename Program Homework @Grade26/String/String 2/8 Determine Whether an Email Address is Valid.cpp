#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int at = -1;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == '@')
        {
            if (at != -1)
            {
                cout << "NO" << endl;
                return 0;
            }
            at = i;
        }
    }
    if (at <= 0 || at >= (int)s.size() - 5)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < at; i++)
    {
        if (!isalnum(s[i]) && s[i] != '_')
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (s.substr(s.size() - 4) != ".com")
    {
        cout << "NO" << endl;
        return 0;
    }
    string domain = s.substr(at + 1, s.size() - at - 5);
    if (domain.empty())
    {
        cout << "NO" << endl;
        return 0;
    }
    for (char c : domain)
    {
        if (!isalnum(c))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}