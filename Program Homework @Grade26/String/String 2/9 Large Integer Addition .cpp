#include <bits/stdc++.h>
using namespace std;

string bigAdd(string a, string b)
{
    // 翻转字符串，低位放前面，方便从个位开始计算
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string res;
    int carry = 0; // 进位
    int maxLen = max(a.size(), b.size());

    for (int i = 0; i < maxLen; i++)
    {
        int numA = (i < a.size()) ? (a[i] - '0') : 0;
        int numB = (i < b.size()) ? (b[i] - '0') : 0;
        int sum = numA + numB + carry;
        carry = sum / 10;
        res.push_back( (sum % 10) + '0' );
    }
    // 处理最后的进位
    if (carry != 0)
    {
        res.push_back( carry + '0' );
    }
    // 翻转回来得到答案
    reverse(res.begin(), res.end());
    return res;
}

signed main()
{
    string a, b;
    while (cin >> a >> b)
    {
        string ans = bigAdd(a, b);
        cout << ans << endl;
    }
    return 0;
}