#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string tmp;
    getline(cin, tmp);
    char m = tmp[0];
    int cnt = 0;
    for (char c : s)
    {
        if (c == m)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
