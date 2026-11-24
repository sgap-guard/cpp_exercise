## 字符串 1
### 7-1 求串长
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    getline(cin, s);
    // 这里不用 cin >> s; 因为cin遇到空格就会结束输入，而getline可以读取整行，包括空格
    int a = s.length();
    // 也可以使用 s.size()，效果一样
    cout << a << endl;
    return 0;
}
```
### 7-2 字符串逆序
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a;
    getline(cin, a);
    reverse(a.begin(), a.end());
    // reverse()代表反转字符串
    cout << a << endl;
    return 0;
}
```
### 7-3 统计大写辅音字母
```cpp
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
```
### 7-4 字符串字母大小写转换
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    getline(cin, s);
    for (char &c : s)
    {
        if (c == '#')
        {
            break;
        }
        if (islower(c))
        {
            c = toupper(c);
        }
        else if (isupper(c))
        {
            c = tolower(c);
        }
        cout << c;
    }
    cout << endl;
    return 0;
}
```
### 7-5 统计字符出现次数
```cpp
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
```
### 7-6 判断回文
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    getline(cin, s);
    string b = s;
    reverse(b.begin(), b.end());
    if (s == b)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
```
### 7-7 统计各类字符个数
```cpp
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
```
### 7-8 字符转换
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string numStr = "";
    for (char c : s)
    {
        if (isdigit(c))
        {
            numStr += c;
        }
    }
    if (!numStr.empty())
    {
        long long result = stoll(numStr);
        cout << result << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
```
### 7-9 截取字符串
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    getline(cin, s);
    int a, b;
    cin >> a >> b;
    for (int i = a; i < a + b; i++)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}
```
### 7-10 比较两个字符串大小
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (s1 > s2)
    {
        cout << ">" << endl;
    }
    else if (s1 < s2)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "=" << endl;
    }
}
```