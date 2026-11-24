> [!note]
> 声明：部分题目与模板未使用万能头文件和标准命名空间和主函数，则视为默认使用
>
> 整理时间截止至2026年11月24日，后续会继续更新。
# 基础模板
## 图形输出
### 加速输入输出
```cpp
ios::sync_with_stdio(false);
cin.tie(nullptr);
```
### 输出图形的边界控制
#### 1. 核心框架：坐标系与双重循环
控制台图形打印本质是二维矩阵输出。外层循环控制行 `i`，内层控制列 `j`，内层结束后必须换行。

```cpp
#include <bits/stdc++.h>
using namespace std;
void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // 根据坐标 (i, j) 判定输出
        }
        cout << endl;
    }
}
```

#### 2. 边界与条件判定规律
图形的变化本质是 `(i, j)` 满足的数学关系，以下为必考公式：

| 图形/位置 | 核心判定条件 |
| :--- | :--- |
| 主对角线 | `i == j` |
| 副对角线 | `i + j == n - 1` |
| X 形图案 | `i == j \|\| i + j == n - 1` |
| 矩形边框 | `i == 0 \|\| i == n-1 \|\| j == 0 \|\| j == m-1` |
| 左下/右上实心三角形 | `j <= i` / `j >= i` |
| 中心行/列 | `i == n / 2` |

#### 3. 空格与星号的数学关系
非矩形图形通常需分段循环：先打印空格，再打印字符。
*   **右对齐直角三角形**：第 `i` 行先打印 `n-i-1` 个空格，再打印 `i+1` 个字符。
*   **等腰三角形**：第 `i` 行先打印 `n-i-1` 个前置空格，再打印 `2*i+1` 个字符。
*   **菱形**：拆分为上下两个三角形，分别用双重循环处理。

#### 4. 循环控制易错点
*   **索引起点**：明确是 `0` 到 `n-1` 还是 `1` 到 `n`，这直接决定边界公式是 `n-1` 还是 `n`。
*   **判断优先级**：图形重叠时（如H字矩阵），`if-else if` 顺序决定输出，特殊条件在前，通用条件在后。
*   **break 作用域**：嵌套循环中 `break` 仅跳出最内层，跳出多层需借助标志变量或封装函数使用 `return`。

#### 5. 竞赛实战建议
在OJ平台刷题时格式要求极严：
*   **严禁多余空格**：行末不能有多余空格，严格按样例输出。
*   **调试技巧**：图形错位时临时改为 `cout << "(" << i << "," << j << ") "` 排查边界逻辑。
*   **代码精简**：简单判定用一行条件表达式解决，避免嵌套过深。
## 字符及字符串
### 读取整行
```cpp
string s, p, q;
getline(cin, s); // 读取换行符，直到换行符为止
cin.get(p); // 从输入流中读取一个字符，存入p中
cin.ignore(q); // 从输入流中忽略（丢弃） q 个字符
```
### 按照原样输出
```cpp
cout << R"(////origin$raw\\\\)" << endl;
```
### 翻转
#### 字符串翻转
```cpp
string str = "hello world";
reverse(str.begin(), str.end());
cout << str << endl; // dlrow olleh
```
#### 数字翻转
##### 无前导零
###### 法一
```cpp
int n; cin >> n; // 0123为例
int ans = 0;
while (n > 0)
{
    ans = ans * 10 + n % 10;
    n /= 10;
}
cout << ans << endl; // 321
```
###### 法二
```cpp
string s; cin >> s; // 0123为例
reverse(s.begin(), s.end());
cout << stoi(s) << endl; // 321
// 后续会单独一节讲stoi函数
```
##### 有前导零
```cpp
string s; cin >> s;
reverse(s.begin(), s.end()); // 0123为例
cout << s << endl; // 3210
```
### 提取字符串第i位
```cpp
string s; cin >> s; // Hello World为例，i=2
cout << s[i] << endl; // 从0开始计数，输出为l
```
### 在字符串索引i位置插入字符
```cpp
string s; cin >> s; // Hello World为例，i=5，c='!'
s.insert(i, 1, c); // 在第5位插入1个'!'
cout << s << endl; // 输出为Hello! World
```
### 字符串长度
```cpp
string s; cin >> s; // Hello World为例
cout << s.length() << endl; // 输出为11
cout << s.size() << endl; // 等价写法，输出11
```
### 在字符串中查找字符
#### 法一
```cpp
string s; cin >> s; // Hello World为例
char c; cin >> c; // 查找字符为o
cout << s.find(c) << endl; // 输出为4，从0开始计数，o在第5位
```
#### 法二
```cpp
for (char c : s)
{
    if (c == 'o') // 查找字符为o
    {
        cout << &c - &s[0] << endl;
        // 输出为4，从0开始计数，o在第5位
        cnt++;
        break;
    }
}
```
### 在字符串中查找子字符串
```cpp
string s; cin >> s; // Hello World为例，sub="World"
string s1; cin >> s1; // 查找子字符串为World
cout << s.find(s1) << endl; // 输出为6，从0开始计数，World在第7位
cout << s.find(s1, 7) << endl; // 输出为-1，World不在s的第7位之后
```
### 遍历
```cpp
for (char c : s) // 遍历字符串s中的每个字符，只读取
for (char &c : s) // 遍历字符串s中的每个字符，可修改
```
### 字符串分割
```cpp
string s; cin >> s; // Hello World为例
string str1 = s.substr(0, 5); // 提取前5个字符，输出为Hello
string str2 = s.substr(6, 5); // 提取第6位开始的5个字符，输出为World
```
### 字符串合并
```cpp
string s1 = "hello", s2 = "world";
string s3 = s1 + " " + s2; // 合并s1和s2，输出为hello world
cout << s3 << endl; // hello world
```
### 删除字符串中第i位字符
```cpp
string s; cin >> s; // Hello World为例，i=5
s.erase(i, 1); // 删除第5位字符，输出为Hello World
cout << s << endl; // Hello World
```
### 删除字符串中所有空格
```cpp
string s; cin >> s; // Hello World为例
s.erase(remove(s.begin(), s.end(), ' '), s.end()); 
cout << s << endl; // 输出为HelloWorld
```
### 删除指定位置的字符
```cpp
string s; cin >> s; // Hello! World为例，i=5
s.erase(i, 1); // 删除第5位字符，输出为Hello World
cout << s << endl; // Hello World
```
### 删除字符串末尾的字符
```cpp
string s; cin >> s; // Hello World 为例
s.pop_back(); // 删除末尾字符，输出为Hello Worl
cout << s << endl; // Hello World
```
### 截取字符串
```cpp
string s; cin >> s; // Hello! World为例，i=5，len=3
string str = s.substr(i, len); // 截取第5位开始的3个字符，输出为! W
cout << str << endl; // ! W
```
### 字符串转大小写
#### 法一
```cpp
string s; cin >> s; // Hello World为例
for (char &c : s)
{
    if (islower(c))
    // 后面会讲遍历与isxxx与toxxx函数
    {
        c = toupper(c);
    }
    else if (isupper(c))
    {
        c = tolower(c);
    }
}
```
#### 法二
```cpp
string s; cin >> s; // Hello World为例
for (char &c : s)
{
    if (c >= 'a' && c <= 'z')
    {
        c = c - 'a' + 'A';
    }
    else if (c >= 'A' && c <= 'Z')
    {
        c = c - 'A' + 'a';
    }
}
```
### 判断及转换字符，<cctype>
| 函数 | 说明 | 函数 | 说明 | 函数 | 说明 |
| --- | --- | --- | --- | --- | --- |
| `isalpha` | 判断是否是字母 | `isupper` | 判断是否是大写字母 | `islower` | 判断是否是小写字母 | `isupper` | 判断是否是大写字母 |
| `isspace` | 判断是否是空格 | `ispunct` | 判断是否是标点符号 | `isdigit` | 判断是否是数字 | `isgraph` | 判断是否可显示 |
| `isctrl` | 判断是否是控制字符 | `isntrl` | 判断是否是换行符 | `istab` | 判断是否是制表符 |
| `isalnum` | 判断是否是字母或数字 | `isxdigit` | 判断是否是十六进制数字 | `isprint` | 判断是否可打印 |
| `isblank` | 判断是否是空格或制表符 | `iscntrl` | 判断是否是控制字符 | `isgraph` | 判断是否可显示 |
| `tolower` | 小写字母转大写字母 | `toupper` | 大写字母转小写字母 | ||
### string构造函数
这里的`string`构造函数是指重复次数和字符来初始化字符串。
```cpp
// string s(重复次数，字符);
string s(5, 'a'); // 输出为aaaaa
```
### 数字转字符串
```cpp
long long n; cin >> n; // 123456789为例
string s = to_string(n); // 输出为123456789
```
### 字符串转数字
```cpp
string s; cin >> s; // 123456789为例
int n = stoi(s); // 输出为123456789
```
### 判断字符串是否为空
```cpp
string s; cin >> s; // Hello World为例
if (s.empty()) cout << "yes" << endl; // 输出为no
else cout << "no" << endl; // 输出为no
```
## 数学
### 数学函数
|函数 | 说明 | 函数 | 说明 | 函数 | 说明 |
| --- | --- | --- | --- | --- | --- |
| `max(a, b)` | 返回$a$和$b$中的最大值 | `min(a, b)` | 返回$a$和$b$中的最小值 | `abs(x)` | 返回$x$的绝对值 |
|`max({a, b, c,})` | 返回$a$、$b$和$c$中的最大值 | `min({a, b, c})` | 返回$a$、$b$和$c$中的最小值 | `pow(x, y)` | 返回$x^y$ |
| `sqrt(x)` | 返回$x$的平方根 | `ceil(x)` | 返回$x$（浮点）的上取整 | `floor(x)` | 返回$x$（浮点）的下取整 |
| `round(x)` | 返回$x$的四舍五入值 | `cbrt(x)` | 返回$x$的立方根 | `exp(x)` | 返回$e^x$ |
| `abs(x)` | 返回$x$的绝对值 | `log(x)` | 返回以$e$为底的$x$的对数 | `log10(x)` | 返回以$10$为底的$x$的对数 |
| `sin(x)` | 返回$x$的正弦 | `cos(x)` | 返回$x$的余弦 | `tan(x)` | 返回$x$的正切 |
|`asin(x)` | 返回$x$的反正弦 | `acos(x)` | 返回$x$的反余弦 | `atan(x)` | 返回$x$的反正切 |
| `derivative(x)` | 返回$x$的导数 | `integral(x)` | 返回$x$的积分 | `factorial(x)` | 返回$x$的阶乘 |
### 判断数字$a$是否为偶数
```cpp
int a; cin >> a; // 12为例
if (a % 2 == 0) cout << "yes" << endl; // 输出为yes
else cout << "no" << endl; // 输出为no
```
### 判断数字$a$是否含有数字$b$
```cpp
bool hasDigit(int a, int b)
{
    int temp = a;
    if (temp < 0) temp = -temp;
    while (temp != 0)
    {
        int digit = temp % 10;
        if (digit == b)
        {
            return true;
        }
        temp = temp / 10;
    }
    return false;
}
```
### 判断质数
#### 基础试除法
```cpp
#include <bits/stdc++.h>
using namespace std;

// 判断单个数 x 是否为质数
bool isPrime(int x)
{
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0) return false;
    }
    return true;
}
```
#### 埃氏筛
// 埃氏筛：标记 1~n 范围内的质数，is_composite 数组需提前分配好大小
```cpp
void getPrimesEratosthenes(int n, vector<bool> &is_composite)
{
    is_composite.assign(n + 1, false);
    // 初始化，false 表示是质数
    is_composite[0] = is_composite[1] = true;
    
    for (int i = 2; (long long)i * i <= n; i++)
    {
        if (!is_composite[i]) // 如果 i 是质数
        {
            // 将 i 的倍数全部标记为合数
            for (int j = i * i; j <= n; j += i)
            {
                is_composite[j] = true;
            }
        }
    }
}
```
#### 线性筛（欧拉筛）
适用于一次性求出 $n$以内所有的质数，保证每个合数只被其最小质因子筛掉一次，时间复杂度严格为$O(n)$。
```cpp
#include <bits/stdc++.h>
using namespace std;
vector<int> getPrimesEuler(int n, vector<bool> &is_composite)
{
    is_composite.assign(n + 1, false);
    vector<int> primes;
    
    for (int i = 2; i <= n; i++)
    {
        if (!is_composite[i])
        {
            primes.push_back(i); // i 是素数，加入素数表
        }
        // 用已知的素数去筛掉 i * prime[j]
        for (size_t j = 0; j < primes.size() && (long long)i * primes[j] <= n; j++)
        {
            is_composite[i * primes[j]] = true;
            // 核心：保证每个合数只被它的最小质因子筛掉
            if (i % primes[j] == 0) break;
        }
    }
    return primes;
}
```
### 向上取整，向下取整
存在等式$a = q \times b + r$，其中$q$为商，$r$为余数，且$0 \leq r < b$。则有：
```cpp
double x1 = ceil(s); // 向上取整，函数
double x2 = floor(s); // 向下取整，函数
int x3 = (a + b - 1) / b; // 向上取整，数学
int x4 = a / b; // 向下取整，数学
```
### 进制转换
#### 给定十进制数字，按要求转换为八进制，十六进制（大小写）
```cpp
int n; cin >> n; // 123为例
cout << oct << n << endl; // 输出为173，八进制
cout << hex << n << endl; // 输出为7b，十六进制小
cout << hex << uppercase << n << endl; // 输出为7B，十六进制大
```
#### 十进制转二进制
##### 无前导零
```cpp
void printBinaryShort(int n)
{
    if (n == 0)
    {
        cout << 0 << endl;
        return;
    }
    // 找到最高位的 1 所在的位置
    int highest = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((n >> i) & 1)
        {
            highest = i;
            break;
        }
    }
    // 从最高位的 1 开始输出，自然去除了前导零
    for (int i = highest; i >= 0; i--)
    {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}
```
##### 有前导零，位宽8
###### 法一
```cpp
for (int i = 7; i >= 0; i--)
{
    cout << ((n >> i) & 1);
}
```
###### 法二
```cpp
bitset<8> bs(n);// 输出 8 位二进制，不足高位补0，123为例
cout << bs.to_string() << endl; // 输出为01111011
```
#### 输入数字$a$,$n$，要求将输入的数字$n$（十进制）转换成$a$进制数字
```cpp
int a, n; cin >> a >> n;
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
cout << res << endl;
return 0;
```
### 阶乘
#### 法一
```cpp
int factorial(int n)
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```
#### 法二
```cpp
int factorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}
```
#### 法三
```cpp
int x = factorial(n); // n!，n为非负整数
```
### 排序
#### sort
```cpp
sort(v.begin(), v.end()); // 升序排序
sort(v.begin(), v.end(), greater<int>()); // 降序排序
sort(s.begin(), s.end()); // 字符串升序排序
sort(s.begin(), s.end(), greater<char>()); // 字符串降序排序
sort(s.begin(), s.end(), greater()); // 这么写也可以，>=C++14
```
#### 冒泡排序
```cpp
// 冒泡排序：isAsc 为 true 表示升序，false 表示降序
void bubbleSort(vector<int> &v, bool isAsc)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            // 根据标志位决定交换条件
            if ((isAsc && v[j] > v[j + 1]) || (!isAsc && v[j] < v[j + 1]))
            {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        // 优化：如果一轮遍历没有发生交换，说明已经有序，提前结束
        if (!swapped) break;
    }
}
```
#### 选择排序
```cpp
// 选择排序：isAsc 为 true 表示升序，false 表示降序
void selectionSort(vector<int> &v, bool isAsc)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int targetIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            // 根据标志位寻找最小或最大元素的下标
            if ((isAsc && v[j] < v[targetIdx]) || (!isAsc && v[j] > v[targetIdx]))
            {
                targetIdx = j;
            }
        }
        // 将找到的目标元素与当前位置交换
        if (targetIdx != i)
        {
            swap(v[i], targetIdx);
        }
    }
}
```
#### cmp
```cpp
bool cmp(int a, int b)
{
    return a < b; // 升序排序
    // return a > b; // 降序排序
}
```
### 约瑟夫环
$n$个人围成一圈，从某个人开始报数，报到$m$的人出列，剩下的人继续报数，直到最后只剩一人，求最后留下的人的编号
```cpp
int josephusMath(int n, int m)
{
    int res = 0; // 初始状态：1个人时，幸存者下标为0
    // 从2个人开始递推，直到n个人
    for (int i = 2; i <= n; i++)
        res = (res + m) % i;
    // 递推得到的是0~n-1的下标，题目通常要求1~n的编号，故+1
    return res + 1;
}
```
### 青蛙跳井
井深为$h$，青蛙每天爬$u$米，每天晚上滑下$d$米，问青蛙第几天天才能跳到井口？
```cpp
long long H,U,D;
cin >> H >> U >> D;
if (H <= U)
{
    cout << 1 << endl;
    return 0;
}
long long a = U - D;
long long b = H - U;
long long day = (b + a -1) / a;
cout << day + 1 << endl;
```
### 输出固定位小数数字
```cpp
double num; cin >> num; // 3.1415926为例
cout << fixed << setprecision(2) << num << endl;
// 输出为3.14，保留2位小数
```
### 对于给定的四位数，提取其个位、十位、百位、千位
```cpp
int num; cin >> num; // 1234为例
int thousands = (num / 1000) % 10; // 千位
int hundreds = (num / 100) % 10; // 百位
int tens = (num / 10) % 10; // 十位
int ones = num % 10; // 个位
```
### 最大公因数与最小公倍数
```cpp
#include <bits/stdc++.h>
using namespace std;

// 欧几里得算法手写gcd
int gcd_own(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// 手写lcm，公式 lcm(a,b)=a*b/gcd(a,b)
int lcm_own(int a, int b)
{
    return a / gcd_own(a, b) * b;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b; cin >> a >> b;
    cout << "手写gcd: " << gcd_own(a, b) << endl;
    cout << "手写lcm: " << lcm_own(a, b) << endl;

    // std::gcd，std::lcm在C++17/GNU++17及后续版本中引入
    // 很多OJ的bits/stdc++.h已经包含
    cout << "库gcd: " << gcd(a, b) << endl;
    cout << "库lcm: " << lcm(a, b) << endl;
    return 0;
}
```
### 判断是否是$2$的$n$次方
GCC扩展语法
```cpp
long long x;
while (cin >> x)
{
    if (x < 0) x = -x;
    if (((x & (x - 1)) == 0) && x > 0)
    {
        long long n = __builtin_ctz(x);
        cout << n << endl;
    }
    else
    {
        cout << "No!" << endl;
    }
}
```
### 异或，同或
异或（`XOR`）是位运算，符号$^$，两比特相同为$0$、不同为$1$

同或（`XNOR`）是其取反，相同为$1$、不同为$0$。

C++ 无原生同或运算符，用`~(a ^ b)`或`!(a ^ b)`实现。
### 交换数值
#### swap
```cpp
int a = 10, b = 20;
swap(a, b);
cout << a << " " << b << endl; // 20 10
```
#### 三变量交换
```cpp
int a = 10, b = 20;
int c = a; a = b; b = c;
cout << a << " " << b << endl; // 20 10
```
#### 异或交换
```cpp
int a = 10, b = 20;
a = a ^ b; b = b ^ a; a = a ^ b;
cout << a << " " << b << endl; // 20 10
```
## 数组
### 一维数组
#### 对数组排序
```cpp
int arr[5] = {5, 2, 4, 1, 3};
sort(arr, arr + 5); // 升序排序
```
#### 对数组查重
```cpp
void removeDuplicates(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
}
```
#### 前缀和
构建前缀和数组
```cpp
sum[i] = sum[i-1] + a[i];
```
查询$[l, r]$的前缀和
```cpp
sum[r] - sum[l-1]
```
### 二维数组
#### 求和
```cpp
int sum = 0;
int a[100][100];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        sum += a[i][j];
    }
}
```
#### 旋转矩阵
```cpp
int a[100][100];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        a[i][j] = a[j][i];
    }
}
```
### 动态数组
`vector`是C++ STL中的动态数组，支持自动扩展和收缩，提供了丰富的成员函数和算法支持。常用操作包括：
长度可以自动增长，不用像普通数组那样提前定死大小。
#### 定义与初始化
##### 空vector
```cpp
vector<int> v;   // 长度为 0
```
##### 指定长度初始化
```cpp
vector<int> v(n);   // 长度为 n，每个元素初始化为 0
```
#### 成员函数
##### `unique`与`erase`  
`unique`算法移除相邻重复元素，返回新逻辑结尾迭代器，原容器大小不变，需配合erase真正删除。用法：
```cpp
sort(v.begin(),v.end()); 
v.erase(unique(v.begin(),v.end()),v.end()); 
```
仅对连续重复有效，使用前必须先排序。 
```cpp
    vector<int> v;
    int n, x; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());          // unique必须先排序，让相同数字挨在一起
    auto last = unique(v.begin(), v.end());
    v.erase(last, v.end());            // 删除后面重复垃圾元素

    // 输出
    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << v[i];
    }
```
##### `push_back`与`pop_back`
`push_back`在尾部添加元素，`pop_back`删除尾部元素。
```cpp
v.push_back(10);
v.pop_back();   // 删除尾部元素，长度 -1
```
##### `size`与`empty`
`size`返回容器中元素的个数，`empty`判断容器是否为空。
```cpp
int len = v.size();
bool isEmpty = v.empty();
```
##### `reserve`
预分配空间，避免频繁的内存申请和释放。
```cpp
v.reserve(1000000);
```
##### `clear`
清空容器。
```cpp
v.clear();
```
##### `resize`
改变容器大小，如果容器变大，则在尾部填充默认值，如果容器变小，则删除尾部元素。
```cpp
v.resize(10);        // 长度变为 10，多出的补 0
v.resize(10, 5);    // 多出的补 5
```
##### `front`与`back`
返回首元素和尾元素的引用。
```cpp
int first = v.front();
int last  = v.back();
```
##### `begin`与`end`
返回迭代器，指向容器的第一个元素和最后一个元素的下一个位置。
##### `insert`与`erase`
`insert`在指定位置插入元素，返回插入元素的迭代器。`erase`删除指定位置的元素，返回删除元素的下一个元素的迭代器。
```cpp
v.insert(v.begin() + 2, 99);  // 在下标 2 处插入 99
v.insert(v.end(), 3, 7);      // 末尾插入 3 个 7
v.erase(v.begin() + 2);           // 删除下标 2
v.erase(v.begin() + 1, v.begin() + 4); // 删除 [1,4)
```
#### 遍历`vector`
##### 下标遍历
```cpp
for (int i = 0; i < (int)v.size(); i++)
{
    cout << v[i] << " ";
}
```
#### 范围for遍历
```cpp
for (int x : v)
{
    cout << x << " ";
}
```
##### 迭代器遍历
```cpp
for (auto it = v.begin(); it != v.end(); it++)
{
    cout << *it << " ";
}
```
#### 二维`vector`
```cpp
vector<vector<int>> mat(5, vector<int>(3, 0));
// 5 行 3 列，全 0
```
### 大整数加法
```cpp
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
    cin >> a >> b;
    string ans = bigAdd(a, b);
    cout << ans << endl;
    return 0;
}
```
## 时间复杂度
时间复杂度越大，算法的运行时间就越大。常见的时间复杂度有：
| 时间复杂度 | 说明 | 时间复杂度 | 说明 |
| --- | --- | --- | --- |
| $O(1)$ | 常数时间复杂度 | $O(n)$ | 线性时间复杂度 |
| $O(log n)$ | 对数时间复杂度 | $O(n log n)$ | 线性对数时间复杂度 |
| $O(n^2)$ | 平方时间复杂度 | $O(n^3)$ | 立方时间复杂度 |
时间比较：$O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(n^3) < O(2^n) < O(n!) < O(n^n)$















