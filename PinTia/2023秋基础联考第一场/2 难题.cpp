#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s; cin >> s;
    int cnt = 0;
    for (char c : s)
    {
        if ((c - '0') % 2 == 0)
        //这一行是判断是否是偶数，减0是为了将字符转换为整数
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}