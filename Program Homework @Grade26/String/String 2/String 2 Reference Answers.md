## 字符串 2
### 7-1 统计英语单词个数
#### 法一 遍历字符串
```cpp
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
```
#### 法二 使用stringstream流
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int cnt = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        // 当前是字母，且前面不是字母（说明是单词开头）
        if (isalpha((unsigned char)s[i]) && (i == 0 || !isalpha((unsigned char)s[i - 1])))
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}

```
### 7-2 最长最短单词
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word, maxWord, minWord;
    getline(cin, s);
    s += " ";
    int maxLen = 0, minLen = 101;

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] != ' ' && s[i] != ',')
        {
            word += s[i];
        }
        else if (word.size() > 0)
        {
            if ((int)word.size() > maxLen)
            {
                maxLen = word.size();
                maxWord = word;
            }
            if ((int)word.size() < minLen)
            {
                minLen = word.size();
                minWord = word;
            }
            word.clear();
        }
    }
    cout << maxWord << endl << minWord << endl;
    return 0;
}
```
### 7-3 查验身份证
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int w[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char m[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    bool allPassed = true;
    while (n--)
    {
        string id; cin >> id;
        bool ok = true;
        for (int i = 0; i < 17; i++)
        {
            if (!isdigit((unsigned char)id[i]))
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            int sum = 0;
            for (int i = 0; i < 17; i++)
            {
                sum += (id[i] - '0') * w[i];
            }
            int z = sum % 11;
            if (id[17] != m[z])
            {
                ok = false;
            }
        }
        if (!ok)
        {
            cout << id << endl;
            allPassed = false;
        }
    }
    if (allPassed)
    {
        cout << "All passed" << endl;
    }
    return 0;
}
```
### 7-4 从身份证号码中提取出出生年月
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string id;
    while (cin >> id)
    {
        if (id.size() != 18)
        {
            cout << "Invalid data,input again!" << endl;
        }
        else
        {
            string year = id.substr(6, 4);
            string month = id.substr(10, 2);
            cout << year << "," << month << endl;
        }
    }
    return 0;
}
```
### 7-5 用户权限
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string role, status, action;
    cin >> role >> status >> action;
    if (status == "deleted")
    {
        cout << "deny" << endl;
        return 0;
    }
    if (status == "frozen")
    {
        if (action == "view")
        {
            cout << "permit" << endl;
        }
        else
        {
            cout << "deny" << endl;
        }
        return 0;
    }
    if (status == "active")
    {
        if (role == "admin")
        {
            cout << "permit" << endl;
            return 0;
        }
        if (role == "user" && (action == "view" || action == "edit"))
        {
            cout << "permit" << endl;
            return 0;
        }
        if (role == "guest" && action == "view")
        {
            cout << "permit" << endl;
            return 0;
        }
    }
    cout << "deny" << endl;
    return 0;
}
```
### 7-6 IP地址转换
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ip; cin >> ip;
    int a = stoi(ip.substr(0, 8), nullptr, 2);
    // stoi(str, idx,base)是将字符串str按base进制转换为整数，idx是指向第一个未转换字符的指针
    int b = stoi(ip.substr(8, 8), nullptr, 2);
    int c = stoi(ip.substr(16, 8), nullptr, 2);
    int d = stoi(ip.substr(24, 8), nullptr, 2);
    cout << a << "." << b << "." << c << "." << d << endl;
    return 0;
}
```
### 7-7 字符串的冒泡排序
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    // 冒泡排序，只扫描 K 遍
    for (int i = 0; i < k; i++)
    {
        // 第 i 遍（从0开始）比较范围是前 n-1-i 对
        for (int j = 0; j < n - 1 - i; j++)
        {
            // string 直接比较字典序，前一个大于后一个就交换
            if (str[j] > str[j + 1])
            {
                swap(str[j], str[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << endl;
    }
    return 0;
}
```
### 7-8 判断E-mail地址是否合法
```cpp
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
```
### 7-9 大整数加法(模板题)
```cpp
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
```
### 7-10 切分表达式——写个tokenizer吧
```cpp
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
```




