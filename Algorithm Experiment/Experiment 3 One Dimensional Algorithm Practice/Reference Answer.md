### 1 数组查询
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n; cin >> n;
    int a[25];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x; cin >> x;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
```
### 2 用数组求n个数的和
```cpp
#include <bits/stdc++.h>
using namespace std;
static int a[25];
// 写在主函数前面的，一般是全局变量或者全局函数，可作用于整个程序。
// 这里用到了static，意思是静态变量，只作用于本源文件。
// 这样就可以在函数调用之间共享数组a，避免重复分配内存。
// 但是，有时错误的使用static会导致内存泄漏，或者题目直接WA。
signed main()
{
    int n, sum = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}
```
### 3 出现次数最多的字母
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s; cin >> s;
    int a[28] = {0}; // 对每个数组元素初始化为0
    for (char c : s) // 遍历字符串s中的每个字符
    {
        if (isalpha(c)) // 如果字符是字母
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
```
