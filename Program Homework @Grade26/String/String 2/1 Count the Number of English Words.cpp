// 法一：逐字符遍历
// #include <bits/stdc++.h>
// using namespace std;
//
// int main()
// {
//     string s;
//     getline(cin, s);
//
//     int cnt = 0;
//     for (int i = 0; i < (int)s.size(); i++)
//     {
//         // 当前是字母，且前面不是字母（说明是单词开头）
//         if (isalpha((unsigned char)s[i]) && (i == 0 || !isalpha((unsigned char)s[i - 1])))
//         {
//             cnt++;
//         }
//     }
//
//     cout << cnt << endl;
//     return 0;
// }
//
// 法二：使用stringstream切分
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}