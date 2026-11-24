#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;
    int n = s.length();
    int i = 0;
    while (i < n)
    {
        // 情况1：如果是数字或者小数点，说明这是一个正数
        if (isdigit(s[i]) || s[i] == '.')
        {
            string token = "";
            // 一直读取，直到遇到非数字、非小数点的字符
            while (i < n && (isdigit(s[i]) || s[i] == '.'))
            {
                token += s[i];
                i++;
            }
            cout << token << "\n";
        }
        // 情况2：如果是 '+' 或 '-'，需要判断它是运算符还是数字的正负号
        else if (s[i] == '+' || s[i] == '-')
        {
            // 如果它是第一个字符，或者前面是运算符、左括号，那它就是负数的符号
            if (i == 0 || s[i-1] == '+' || s[i-1] == '-' || s[i-1] == '*' || s[i-1] == '/' || s[i-1] == '(')
            {
                string token = "";
                token += s[i]; // 先把符号加进去
                i++;
                // 继续读取后面的数字和小数点
                while (i < n && (isdigit(s[i]) || s[i] == '.'))
                {
                    token += s[i];
                    i++;
                }
                cout << token << "\n";
            }
            // 否则，它就是一个单纯的运算符
            else
            {
                cout << s[i] << "\n";
                i++;
            }
        }
        // 情况3：其他情况（* / ( )），直接作为单独 token 输出
        else
        {
            cout << s[i] << "\n";
            i++;
        }
    }
    return 0;
}