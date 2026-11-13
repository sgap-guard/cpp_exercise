### 1
```cpp
#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int S = 0;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        S += fact;
    }
    cout << S << endl;
    return 0;
}
```
### 2
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans << endl;
    return 0;
}
```
### 3
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int score, max_s, min_s;
    bool first = true;
    while (cin >> score)
    {
        if (score < 0)
        {
            break;
        }
        if (first)
        {
            max_s = min_s = score;
            first = false;
        }
        else
        {
            max_s = max(max_s, score);
            min_s = min(min_s, score);
        }
    }
    cout << "max=" << max_s << ",";
    cout << "min=" << min_s << endl;
    return 0;
}
```
### 4
```cpp
#include <iostream>
using namespace std;

bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

signed main()
{
    int n; cin >> n;
    if (isPrime(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
```
### 5
```cpp
#include <iostream>
using namespace std;

bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

signed main()
{
    int n, cnt = 0; cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(i))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
```
### 6
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a, n;
    while (cin >> n >> a)
    {
        if (a == 0 && n == 0)
        {
            break;
        }
        long long sum = 0, cur = 0;
        for (int i = 1; i <= n; i++)
        {
            cur = cur * 10 + a;
            sum += cur;
        }
        cout << sum << endl;
    }
    return 0;
}
```
### 7
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    long long total = 0, cur = 1;
    for (int i = 1; i <= n; i++)
    {
        total += cur;
        cur *= 2;
    }
    cout << total << endl;
    return 0;
}
```
### 8
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    unsigned long long a, b;
    cin >> a >> b;
    unsigned long long GCD = gcd(a, b);
    cout << GCD << endl;
    return 0;
}
```
### 9
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s; 
    getline(cin, s);
    int cnt = 0;
    for (char c : s)
    {
        if (c == '@')
        {
            break;
        }
        if (isalpha(c))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
```
### 10
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int cntA = 0, cntP = 0, cntF = 0;
    int score;
    while (cin >> score)
    {
        if (score < 0)
        {
            break;
        }
        else if (score >= 90 && score <= 100)
        {
            cntA++;
        }
        else if (score >= 60 && score < 90)
        {
            cntP++;
        }
        else if (score >= 0 && score < 60)
        {
            cntF++;
        }
    }
    cout << "A等级" << cntA << "人" << endl;
    cout << "P等级" << cntP << "人" << endl;
    cout << "F等级" << cntF << "人" << endl;
    return 0;
}
```
### 11
```cpp
#include <iostream>
using namespace std;

bool hasDigit(int a)
{
    int tmp = a;
    if (tmp < 0)
    {
        tmp = -tmp;
    }
    while (tmp != 0)
    {
        int digit = tmp % 10;
        if (digit == 8)
        {
            return true;
        }
        tmp = tmp / 10;
    }
    return false;
}

signed main()
{
    int a, b, cnt = 0; cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (hasDigit(i))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
```
### 12
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    while (cin >> n)
    {
        if (n < 0)
        {
            break;
        }
        for (int r = 0; r <= n / 5; r++)
        {
            for (int h = 0; h <= (n - r * 5) / 3; h++)
            {
                int c = n - r - h;
                if (c %3 == 0)
                {
                    int sum = r * 5 + h * 3 + c / 3;
                    if (sum == n)
                    {
                        cout << r << " " << h << " " << c << endl;
                    }
                }
            }
        }
    }
    return 0;
}
```
### 13
```cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int x, min_r = INT_MAX, ans = 0;
    cin >> x;
    while (x != 0)
    {
        int temp = x, rev = 0;
        while (temp > 0)
        {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        if (rev < min_r)
        {
            min_r = rev;
            ans = x;
        }
        cin >> x;
    }
    cout << ans << endl;
    return 0;   
}
```
### 14
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int m; cin >> m;
    int sum = 0, val;
    for (int i = 1; i * 4 <= m; i++)
    {
        int g_max = -1;
        for (int j = 1; j <= 4; j++)
        {
            cin >> val;
            g_max = max(g_max, val);
        }
        sum += g_max;
    }
    cout << sum << endl;
    return 0;
}
```
### 15
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // 下面的string是一个函数，不是字符串，用法是string(重复次数, 字符);
        cout << string(i - 1, ' ')
             << string(2 * n - 2 * i + 1, '0' + i)
             << endl;
    }
    return 0;
}
```
### 16
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    for (int i = 2; i <= 1000; i++)
    {
        int s = 0;
        for (int j = 1; j < i; j++)
            if (i % j == 0) s += j;
        if (s == i)
        {
            cout << setw(5) << i;
            cnt++;
            if (cnt % 5 == 0) cout << endl;
        }
    }
    if (cnt % 5 != 0) cout << endl;
    cout << setw(5) << cnt << endl;
    return 0;
}
```
### 17
```cpp
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

signed main()
{
    int n, k; cin >> n >> k;
    int cnt = 0, cur = n;
    while (cnt < k)
    {
        if (isPrime(cur))
        {
            string s = to_string(cur);
            reverse(s.begin(), s.end());
            int rev_num = stoi(s);
            if (rev_num != cur && isPrime(rev_num))
            {
                cout << cur << endl;
                cnt++;
            }
        }
        cur++;
    }
    return 0;
}
```
### 18
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int h; cin >> h;
    for (int i = 1; i <= h; i++)
    {
        cout << "*";
        if (i > 1 && i < h)
        {
            for (int j = 1; j <= i - 2; j++)
            {
                cout << " ";
            }
            cout << "*";
            for (int j = 1; j <= h - i - 1; j++)
            {
                cout << " ";
            }
        }
        else if (i == 1 || i == h)
        {
            for (int j = 1; j <= h - 2; j++)
            {
                cout << " ";
            }
        }
        cout << "*" << endl;
    }
    return 0;
}
```
### 19
```cpp
#include <iostream>
using namespace std;

bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

signed main()
{
    int n, m; cin >> n >> m;
    for (int i = n; i <= m - 2; i++)
    {
        if (isPrime(i) && isPrime(i + 2))
        {
            cout << "(" << i << "," << i + 2 << ") ";
        }
    }
    cout << endl;
    return 0;
}
```
### 20
```cpp
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n; cin >> n;
    long long org = n;
    bool first = true;
    cout << org << "=";
    long long i = 2;
    while (i * i <= n)
    {
        while (n % i == 0)
        {
            if (!first) 
            {
                cout << "*";
            }
            cout << i;
            first = false;
            n /= i;
        }
        i++;
    }
    if (n > 1)
    {
        if (!first) 
        {
            cout << "*";
        }
        cout << n;
    }
    cout << endl;
    return 0;
}
```