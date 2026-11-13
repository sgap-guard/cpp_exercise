## 一维数组1
### 1 成绩输入输出-I
```cpp
#include <bits/stdc++.h>
using namespace std;
// static(全局): 将变量存于静态区并自动初始化为0，好处是省去手动清零且防爆栈。
// 误用导致WA: 多组测试数据未手动清空，残留上一次的数据引发错误。
// 另外，若循环越界，全局连续内存被破坏比局部变量更难排查。
static int a[15];
signed main()
{
    for (int i = 1; i <= 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << a[10] << endl;
    return 0;
}
```
### 2 成绩输入输出-II
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[15];

signed main()
{
    for (int i = 1; i <= 10; i++)
    {
        cin >> a[i];
    }
    for (int i = 10; i > 1; i--)
    {
        cout << a[i] << " ";
    }
    cout << a[1] << endl;
    return 0;
}
```
### 3 将数组中的数逆序存放
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
    for (int i = n; i > 1; i--)
    {
        cout << a[i] << " ";
    }
    cout << a[1] << endl;
    return 0;
}
```
### 4 输出数组元素
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
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        cnt++;
        if (cnt %3 != 1)
        {
            cout << " ";
        }
        cout << a[i + 1] - a[i];
        if (cnt %3 == 0)
        {
            cout << endl;
        }
    }
    if (cnt %3 != 0)
    {
        cout << endl;
    }
    return 0;
}
```
### 5 编程实现输出下标为奇数的元素
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[105];
signed main()
{
    int n; cin >> n;
    int last = (n % 2 == 0) ? (n - 1) : (n - 2);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 1)
        {
            cout << a[i];
            if (i != last)
            {
                cout << ",";
            }
            else
            {
                cout << endl;
            }
        }
    }
    return 0;
}
```
### 6 动态数列求和（前缀和）
```cpp
#include <bits/stdc++.h>
using namespace std;

static long long a[1005], S[1005];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        S[i] = S[i - 1] + a[i];
        // 前缀和的应用，简单理解成求前n项和
    }
    
    for (int i = 1; i < n; i++)
    {
        cout << S[i] << " ";
    }
    cout << S[n] << endl;
    return 0;
}
```
### 7 最大数的位置
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[105];
signed main()
{
   int n; cin >> n;
   int val = -1, pos = 0;
   for (int i = 1; i <= n; i++)
   {
        cin >> a[i];
        if (a[i] > val)
        {
            val = a[i];
            pos = i;
        }
   }
   cout << pos << endl;
   return 0;
}
```
### 8 交换最大值与最小值
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[105];
signed main()
{
    int n;  cin >> n;
    int MAX_val = -1, MAX_pos = 0;
    int MIN_val = 1e9, MIN_pos = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > MAX_val)
        {
            MAX_val = a[i];
            MAX_pos = i;
        }
        if (a[i] < MIN_val)
        {
            MIN_val = a[i];
            MIN_pos = i;
        }
    }
    swap(a[1], a[MIN_pos]);
    if (MAX_pos == 1) 
    {
        MAX_pos = MIN_pos; 
    }
    swap(a[n], a[MAX_pos]);
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
```
### 9 求数组中偶数之和
```cpp
#include <bits/stdc++.h>
using namespace std;

static long long a[10005];
signed main()
{
    int n; cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }
    cout << sum << endl;
    return 0;
}
```
### 10 统计数字
```cpp
#include <bits/stdc++.h>
using namespace std;

static long long a[105];
signed main()
{
    int n; cin >> n;
    long long sum1 = 0, sum2 = 0;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            sum1 += a[i];
            cnt1++;
        }
        else if (a[i] < 0)
        {
            sum2 += a[i];
            cnt2++;
        }
    }
    cout << cnt1 << " " << sum1 << endl;
    cout << cnt2 << " " << sum2 << endl;
    return 0;
}
```
### 11 向量点积计算
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[1005], b[1005];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i] * b[i];
    }
    cout << sum << endl;
    return 0;
}
```
### 12 查找整数
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[25];
signed main()
{
    int n, X; cin >> n >> X;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == X)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}
```
### 13 一年中的第几天
```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a, b, c; cin >> a >> b >> c;
    int sum[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    int total = sum[b] + c;
    if (((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) && b > 2)
    {
        total++;
    }
    cout << total << endl;
    return 0;
}
```
### 14 输出所有大于平均值的数
```cpp
#include <bits/stdc++.h>
using namespace std;

static int a[15];
signed main()
{
    int n; cin >> n;
    if (n > 10 || n < 1)
    {
        cout << "Invalid." << endl;
        return 0;
    }
    double avg = 0; int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    avg = 1.0 * sum / n;
    cout << fixed << setprecision(2) << avg << endl;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > avg)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
```

---

> 从下面的题目开始加难，与前面不在一个难度级别
>
> 15~20是给人做的吗？:( 下面全部AI生成

### 15 数字游戏
```cpp
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
long long a[MAXN];
long long sorted_a[MAXN];
long long suffix_sum[MAXN];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sorted_a[i] = a[i];
    }
    sort(sorted_a + 1, sorted_a + n + 1);
    suffix_sum[n + 1] = 0; 
    for (int i = n; i >= 1; i--)
    {
        suffix_sum[i] = suffix_sum[i + 1] + sorted_a[i];
        // 前缀和
    }
    for (int i = 1; i <= n; i++)
    {
        int pos = upper_bound(sorted_a + 1, sorted_a + n + 1, a[i]) - sorted_a;
        cout << suffix_sum[pos] << " ";
    }
    return 0;
}
```
### 16 找出不是两个数组共有的元素
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1, arr2;
    int n1, n2;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }

    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    vector<int> result;
    vector<bool> printed(100000, false);
    for (int x : arr1)
    {
        bool found = false;
        for (int y : arr2)
        {
            if (x == y)
            {
                found = true;
                break;
            }
        }
        if (!found && !printed[x + 50000])
        {
            result.push_back(x);
            printed[x + 50000] = true;
        }
    }
    for (int x : arr2)
    {
        bool found = false;
        for (int y : arr1)
        {
            if (x == y)
            {
                found = true;
                break;
            }
        }
        if (!found && !printed[x + 50000])
        {
            result.push_back(x);
            printed[x + 50000] = true;
        }
    }
    for (size_t i = 0; i < result.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << result[i];
    }
    cout << endl;
    return 0;
}
```
### 17 删除指定值
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int target; cin >> target;
    vector<int> result;
    for (int x : nums)
    {
        if (x != target)
        {
            result.push_back(x);
        }
    }
    for (size_t i = 0; i < result.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << result[i];
    }
    cout << endl;
    return 0;
}
```
### 18 向有序序列插入一个整数
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        nums.push_back(x);
    }
    int insert_val; cin >> insert_val;
    auto it = lower_bound(nums.begin(), nums.end(), insert_val);
    nums.insert(it, insert_val);
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << nums[i];
    }
    cout << endl;
    return 0;
}
```
### 19 有序序列合并
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> result;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            result.push_back(a[i]);
            i++;
        }
        else
        {
            result.push_back(b[j]);
            j++;
        }
    }
    while (i < n)
    {
        result.push_back(a[i]);
        i++;
    }
    while (j < m)
    {
        result.push_back(b[j]);
        j++;
    }
    for (size_t k = 0; k < result.size(); k++)
    {
        if (k > 0)
        {
            cout << " ";
        }
        cout << result[k];
    }
    cout << endl;
    return 0;
}
```
### 20 移动次数最少
```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int avg = sum / n;
    long long prefix_sum = 0;
    int moves = 0;
    for (int i = 0; i < n - 1; i++)
    {
        prefix_sum += a[i];
        long long diff = prefix_sum - (long long)(i + 1) * avg;
        if (diff != 0)
        {
            moves++;
        }
    }
    cout << moves << endl;
    return 0;
}
```