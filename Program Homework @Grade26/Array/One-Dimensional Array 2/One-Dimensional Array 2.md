### 1 计数
```cpp
#include <iostream>
using namespace std;

static int cnt[10001];
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    for (int i = 10000; i >= 1; i--)
    {
        if (cnt[i] > 0)
        {
            cout << i << "-" << cnt[i] << endl;
        }
    }
    return 0;
}
```
### 2 投票统计
```cpp
#include <bits/stdc++.h>
using namespace std;

static int cnt[6];
signed main()
{
    int n; cin >> n;
    int val = 0, inval = 0;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if (x >= 1 && x <= 5) 
        {
            cnt[x]++;
            val++;
        }
        else
        {
            inval++;
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        if (i > 1)
        {
            cout << " ";
        }
        cout << cnt[i];
    }
    cout << endl;
    cout << val << " " << inval << endl;
    int m_v = 0, winner = 1;
    for (int i = 1; i <= 5; i++)
    {
        if (cnt[i] > m_v)
        {
            m_v = cnt[i];
            winner = i;
        }
    }
    cout << winner << endl;
    return 0;
}
```
### 3 小明的存钱罐
```cpp
#include <bits/stdc++.h>
using namespace std;

static int sum[1005];
signed main()
{
    int n, d; cin >> n >> d;
    for (int day = 1; day <= d; day++)
    {
        int x; cin >> x;
        sum[x] += day;
    }
    for (int i = 0; i < n; i++)
    {
        if (i > 0) cout << " ";
        cout << sum[i];
    }
    cout << endl;
    return 0;
}
```
### 4 春游
```cpp
#include <bits/stdc++.h>
using namespace std;

static int vis[1005];
signed main()
{
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x; cin >> x;
        vis[x] = 1;
    }
    int all = 1;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            all = 0;
            break;
        }
    }
    if (all)
    {
        cout << n << endl;
    }
    else
    {
        int first = 1;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                if (!first)
                {
                    cout << " ";
                }
                cout << i;
                first = 0;
            }
        }
        cout << endl;
    }
    return 0;
}
```
### 5 出现次数最多的数
```cpp
#include <bits/stdc++.h>
using namespace std;
static int cnt[1005];
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        cnt[x]++;
    }
    int max_num = 0, max_cnt = 0;
    for (int i = 0; i <= 1000; i++)
    {
        if (cnt[i] > max_cnt)
        {
            max_cnt = cnt[i];
            max_num = i;
        }
    }
    cout << max_num << " " << max_cnt << endl;
    return 0;
}
```
### 6 谁是你的潜在朋友
```cpp
#include <bits/stdc++.h>
using namespace std;

static int cnt[205], fav[205];
signed main()
{
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int p; cin >> p;
        fav[i] = p;
        cnt[p]++;
    }
    for (int i = 1; i <= n; i++)
    {
        int fri = cnt[fav[i]] - 1;
        if (fri == 0)
        {
            cout << "BeiJu" << endl;
        }
        else
        {
            cout << fri << endl;
        }
    }
    return 0;
}
```
### 7 整数序列去重并排序
```cpp
#include <bits/stdc++.h>
using namespace std;

static int vis[1005];
signed main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        vis[x] = 1;
    }
    int first = 1;
    for (int i = 1; i <= 1000; i++)
    {
        if (vis[i])
        {
            if (!first)
            {
                cout << " ";
            }
            cout << i;
            first = 0;
        }
    }
    cout << endl;
    return 0;
}
```
### 8 二分搜索
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[105];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int v; cin >> v;
    int l = 1, r = n;
    int find = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == v)
        {
            cout << mid << endl;
            find = 1;
            break;
        }
        else if (a[mid] < v)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (!find)
    {
        cout << "Value not found." << endl;
    }
    return 0;
}
```
### 9 校门外的树
```cpp
#include <bits/stdc++.h>
using namespace std;

static int vis[10005];
signed main()
{
    int l, m; cin >> l >> m;
    for (int i = 0; i < m; i++)
    {
        int l, r; cin >> l >> r;
        for (int j = l; j <= r; j++)
        {
            vis[j] = 1;
        }
    }
    int total = l + 1;
    int remove = 0;
    for (int i = 0; i <= l; i++)
    {
        if (vis[i] == 1)
        {
            remove++;
        }
    }
    cout << total - remove << endl;
    return 0;
}
```
### 10 开关灯
```cpp
#include <bits/stdc++.h>
using namespace std;

static int state[5005];
signed main()
{
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        state[i] = 1;
    }
    for (int k = 1; k <= m; k++)
    {
        for (int i = k; i <= n; i += k)
        {
            if (state[i] == 1)
            {
                state[i] = 0;
            }
            else
            {
                state[i] = 1;
            }
        }
    }
    int first = 1;
    for (int i = 1; i <= n; i++)
    {
        if (state[i] == 0)
        {
            if (!first)
            {
                cout << ",";
            }
            cout << i;
            first = 0;
        }
    }
    cout << endl;
    return 0;
}
```
### 11 简化的插入排序
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[15];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int x; cin >> x;
    int pos = n + 1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > x)
        {
            pos = i;
            break;
        }
    }
    for (int i = n; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = x;
    for (int i = 1; i <= n + 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
```
### 12 直线插入排序
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[25];
void printArr(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << "原始序列：";
    printArr(n);
    for (int i = 2; i <= n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 1 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
        cout << "第" << (i - 1) << "趟排序结果：";   // ← 中文冒号
        printArr(n);
    }
    return 0;
}
```
### 13 选择法排序之过程
```cpp
#include <bits/stdc++.h>
using namespace std;

int a[15];
void printArr(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        printArr(n);
        return 0;
    }
    for (int k = 0; k < n - 1; k++)
    {
        int minPos = k;
        for (int j = k + 1; j < n; j++)
        {
            if (a[j] < a[minPos])
            {
                minPos = j;
            }
        }
        swap(a[k], a[minPos]);
        printArr(n);
    }
    return 0;
}
```
### 14 冒泡排序之过程
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[25];
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
        for (int k = 0; k < n; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
```
### 15 猴子选大王
#### 数学做法
```cpp
#include <iostream>
using namespace std;

int main() 
{
    int n; cin >> n;
    int ans = 0; // f(1)=0
    for (int k = 2; k <= n; k++)
    {
        ans = (ans + 3) % k;
        // 约瑟夫环
    }
    cout << ans + 1 << endl;   // 转成 1~N 编号
    return 0;
}
```
#### 数组做法
```cpp
#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[1005] = {0};        // 0=淘汰, 1=还在圈里
    for (int i = 1; i <= n; i++)
    {
        a[i] = 1;            // 初始都在圈里
    }
    int remain = n;          // 剩余猴子数
    int count = 0;           // 报数计数器
    int i = 1;               // 当前位置
    while (remain > 1)
    {
        if (a[i] == 1)
        {
            count++;
            if (count == 3)
            {
                a[i] = 0;    // 淘汰
                remain--;
                count = 0;   // 重置报数
            }
        }
        i++;
        if (i > n) i = 1;    // 绕回开头，模拟"圈"
    }
    // 找最后剩下的那只
    for (int j = 1; j <= n; j++)
    {
        if (a[j] == 1)
        {
            cout << j << endl;
            break;
        }
    }
    return 0;
}
```
### 16 翻牌
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    bool first = true;
    for (int i = 1; i * i <= n; i++)
    {
        if (!first) 
        {
            cout << " ";
        }
        cout << i * i;
        first = false;
    }
    cout << endl;
    return 0;
}
```
### 17 数组去重
```cpp
#include <bits/stdc++.h>
using namespace std;

int get_unique_count(int a[], int n)
{
    sort(a, a + n);
    return unique(a, a + n) - a;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int a[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << get_unique_count(a, n) << endl;
    return 0;
}
```
### 18 奇偶排序
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> odd, even;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if (x %2 != 0) 
        {
            odd.push_back(x);
        }
        else
        {
            even.push_back(x);
        }
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    for (int x : odd)
    {
        cout << x << endl;
    }
    for (int x : even)
    {
        cout << x << endl;
    }
    return 0;
}
```
### 19 20 进制转换
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a, n; cin >> n >> a;
    string res;
    if (n == 0)
    {
        cout << "0\n";
        return 0;
    }
    while (n > 0)
    {
        int rem = n % a;
        if (rem < 10)
        {
            res += (char)('0' + rem);
        }
        else
        {
            res += (char)('A' + rem - 10);
        }
        n = n / a;
    }
    reverse(res.begin(), res.end());
    cout << uppercase << res << endl;
    // uppercase 将字母转为大写
    return 0;
}
```
