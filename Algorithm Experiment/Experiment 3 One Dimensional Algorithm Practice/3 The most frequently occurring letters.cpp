#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s; cin >> s;
    int a[28] = {0};
    for (char c : s)
    {
        if (isalpha(c))
        {
            a[tolower(c) - 'a']++;
            // 这样写的好处在于避免写26个if-else语句，直接用数组存储每个字母的出现次数，最后再遍历数组找到出现次数最多的字母即可
            // 这招叫做用数组把离散变量变成连续索引。
        }
    }
    int max_cnt = -1;
    char ans = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > max_cnt)
        {
            max_cnt = a[i];
            ans = 'a' + i;
        }
    }
    cout << ans << " " << max_cnt << endl;
    return 0;
}