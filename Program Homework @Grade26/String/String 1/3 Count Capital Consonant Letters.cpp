#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    getline(cin, s);
    int cnt = 0;
    for (char c : s)
    // 遍历字符串中的每个字符
    {
        if (isupper(c) && (c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U'))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}