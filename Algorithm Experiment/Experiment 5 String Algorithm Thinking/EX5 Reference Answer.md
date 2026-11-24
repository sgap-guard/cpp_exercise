## EX5 Reference Answer
### 1 Convert a Decimal to a Binary Integer
```cpp
#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int bin[32];
    int i = 0;
    while (n > 0)
    {
        bin[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << bin[j];
    }
    cout << endl;
    return 0;
}
```
### 2 Count the Number of Characters of Different Categories
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a = 0, b = 0, c = 0, d = 0;
    string s;
    getline(cin, s);
    for (char ch : s)
    {
        if (isspace(ch)) a++;
        else if (isalpha(ch)) b++;
        else if (isdigit(ch)) c++;
        else d++;
    }
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}
```
### 3 Multi Character IO
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string s; getline(cin, s);
        cout << s << endl;
    }
    return 0;
}
```
### 4 Subtract String 1
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int a = 0, b = 0;
    for (char c : s1)
    {
        if (isdigit(c)) a++;
    }
    for (char c : s2)
    {
        if (isdigit(c)) b++;
    }
    cout << a - b << endl;
    return 0;
}
```
### 6 Count the Number of Characters in a String
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string str;
    getline(cin, str);
    int a = 0, b = 0, c = 0, d = 0;
    for (char s : str)
    {
        if (isalpha(s))
            a++;
        else if (isdigit(s))
            b++;
        else if (isspace(s)) 
            c++;
        else 
            d++;
    }
    cout << "zimu=" << a << endl;
    cout << "shuzi=" << b << endl;
    cout << "kongge=" << c << endl;
    cout << "qita=" << d << endl;
    return 0;
}
```