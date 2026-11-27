> [!note]
> 声明：部分题目与模板未使用万能头文件和标准命名空间和主函数，则视为默认使用
>
> 整理时间截止至2026年11月24日，后续会继续更新。

> [!important]
> 本模板的所有代码均使用万能头文件，代码中若没有写万能头文件和标准命名空间，则视为默认使用。所有代码均在GNU++26环境下测试通过。
# 基础模板
## 宏定义
```cpp
#define \n endl // 代表将代码中的`\n` 替换为 `endl`
#define int long long // 代表将代码中的 `int` 替换为 `long long`
// 上面一行宏定义，必须把 `int main()` 改为 `signed main()`，否则会报错
#define PI 3.14 // 定义圆周率 PI=3.14
```
## 循环
### 常见循环类型
#### `for` 循环
```cpp
for (int i = 0; i < n; i++)
{
    // 循环体
}
```
#### `while` 循环
```cpp
int i = 0;
while (/*条件*)
{
    // 循环体
}
// 注意：`while` 循环必须保证循环条件在某一时刻会变为 `false`，否则会陷入死循环
```
#### `do-while` 循环
```cpp
do
{
    // 循环体
} while (/*条件*/);
// 注意：`do-while` 循环至少会执行一次循环体
```
#### `switch` 语句
```cpp
switch (/*表达式*/)
{
case /*常量表达式1*/:
    // 语句1
    break;
case /*常量表达式2*/:
case /*常量表达式3*/:
// 可以合理的利用case穿透，将多个case合并成一个case
    // 语句2
    break;
default:
    // 默认语句
}
```

<details>

<summary>国王的金币</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long k;
    cin >> k;

    long long n = 1;           // 当前阶段：每天发 n 枚，持续 n 天
    long long days_passed = 0; // 已经发放的总天数
    long long total_coins = 0; // 累计获得的金币数

    while (days_passed < k)
    {
        if (days_passed + n <= k)
        {
            // 当前阶段完整度过
            total_coins += n * n;
            days_passed += n;
            n++;
        }
        else
        {
            // 当前阶段只发一部分就达到 k 天
            long long remaining = k - days_passed;
            total_coins += remaining * n;
            break;
        }
    }

    cout << total_coins << endl;

    return 0;
}
```

</details>

#### `break`和`continue`语句
`break`：用于跳出当前循环

`continue`：用于跳过当前循环的剩余部分，直接进入下一次循环

`break`和`continue`只能用于循环语句和`switch`语句中
## 函数
### 基本函数
```cpp
int add(int a, int b)
{
    
}
### 加速输入输出
```cpp
ios::sync_with_stdio(false);
cin.tie(nullptr);
```
### 输出图形的边界控制
#### 一、纯字符图形（方阵）边界规律
##### 1）基础“线”原子条件（必背）
| 线条 | 条件（0 下标） | 说明 |
|---|---|---|
| 上边框 | `i == 0` | 第一行 |
| 下边框 | `i == n - 1` | 最后一行 |
| 左边框 | `j == 0` | 第一列 |
| 右边框 | `j == n - 1` | 最后一列 |
| 主对角线 | `i == j` | 左上 → 右下 |
| 副对角线 | `i + j == n - 1` | 右上 → 左下 |

- **空心**：只用 `==`，只描轮廓线；多条线用 `||` 拼；
- **实心**：用 `>=`、`<=` 圈一块连续区域；
- **镜像翻转**：
  - **左右镜像**：主对角线 ? 副对角线互换；
  - **上下翻转**：把 `i` 换成 `n - 1 - i`；
  - **旋转**：多条条件一起替换。

典型组合：
- N：左竖 `||` 右竖 `||` 主对角线；
- 反 N：左竖 `||` 右竖 `||` 副对角线；
- X：主对角线 `||` 副对角线；
- Z：上框 `||` 下框 `||` 副对角线；
- 反 Z：上框 `||` 下框 `||` 主对角线。

##### 2）非方阵（三角、菱形）
不是固定 `n` 列，套路固定两段循环：
```
外层 i（行）
    内层循环 A → 打前置空格
    内层循环 B → 打图案字符
```
- **空格**：一般是随行递减；
- **图案长度**：一般是奇数递增（`2i?1`）；
- **空心菱形**：图案段只保留该行最左、最右两个点；实心直接全部填满。

记忆口诀：**先挪位置（空格），再画图形**。

---

#### 二、数字图案的边界 & 方向规律
数字题多一个变量：**当前数字 `num`**，边界分「几何边界」和「流动方向边界」。

##### 1）普通递增三角
每行多一个数，`num` 一直 `++`；边界就是 `j <= i`，单纯“放行”。

##### 2）龙摆尾（蛇形）
- **方阵蛇形**：奇数行正扫，偶数行反扫；几何边界每行都是 `1～n`；方向边界判断 `i % 2`；
- **倒三角蛇形**：从最大总和往回切块，每组再判断正反；
- **反向递减方阵**：起点是 `n·n`，一路 `--`。

核心：**几何管画多大一块，奇偶管扫的方向**。

##### 3）螺旋 / 回形（高阶）
不再是单循环一条判断式，而是用「四条边界」收缩：
- `top`：最上面一行；
- `bottom`：最下面一行；
- `left`：最左一列；
- `right`：最右一列；
一圈跑完，边界向内缩，直到撞在一起停止。

规律：**不是一条 if，而是轮流沿着四条边填充，填完收边界**。

---

#### 三、考场通用推导流程（固定步骤）
1. **定坐标系**
   拿小样本（`n = 4 / 5`）标 `(i, j)`；优先选一套下标不要来回乱换。
2. **区分类型**
   - 方阵：一层外层 + 一层内层循环，if 判断要不要输出；
   - 三角菱形：拆空格 + 图案双内层循环；
   - 数字蛇形：额外加方向标记、起点终点；
3. **提取特征**
   - 哪些行 / 列固定全打？→ 边框；
   - 哪些是斜线？→ 两条对角线；
   - 是不是镜像翻转？→ 替换对角线公式；
   - 是不是空心？→ 只留 `==`；实心就用区间；
4. **写骨架**
   循环骨架几乎不变，大部分时间只是换 `if` 里面那串条件；
5. **小样例校验**
   代入 `n = 3` 跑一遍，看第一行、最后一行、对角线是否符合；错了就单独调一条条件。

---

#### 四、高频踩坑规律
1. **下标漂移**：一会儿从 `0`，一会儿从 `1`，对角线公式直接失效；
2. **空心实心混写**：实心用 `==` 画成线条，空心用 `<=` 直接糊一片；
3. **翻转想当然**：不是所有翻转都只换一个变量，有的要整条条件替换；
4. **数字蛇形**：反行不要一个个 `--` 硬猜，先算该行起点、终点再倒序输出；
5. **多余空格**：每行最后多一个空格，考试有时候会卡评测；对策：判断 `j` 是否是最后一个再打空格。

---

#### 五、一张“选型决策表”
| 看到长啥样 | 套路 |
|---|---|
| N / X / Z / 方阵斜线 | 拼边框 + 对角线 |
| 等腰三角 / 菱形 | 空格循环 + 图案循环 |
| 一行比一行多一个数字 | `num` 持续累加 |
| 一行正一行反（蛇） | `i % 2` 判断方向 |
| 一圈一圈往里转 | 四边界收缩螺旋 |
| 全部倒序填满方阵 | 起点设最大值，不断自减 |

   
<details>
<summary>示例</summary>
<details>
<summary>输出n行实心正方形</summary>

```cpp
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout << ch;
    }
    cout << endl;
}
```
</details>

<details> 
<summary>输出n行空心正方形</summary>

```cpp
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
        {
            cout << ch;
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;
}
```

</details>

<details>
<summary>输出n行直角三角形（尖朝上）</summary>

```cpp
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    {
        cout << ch;
    }
    cout << endl;
}
```

</details>

<details>
<summary>输出n行直角三角形（尖朝下）</summary>

```cpp
for (int i = n; i >= 1; i--)
{
    for (int j = 1; j <= i; j++)
    {
        cout << ch;
    }
    cout << endl;
}
```

</details>

<details>
<summary>输出空心菱形</summary>

```cpp
#include <iostream>
using namespace std;

int main()
{
    char ch; int n;
    cout << "请输入绘图字符：";
    cin >> ch;
    cout << "请输入菱形上半部分行数：";
    cin >> n;
    // 打印上半部分（包含中间一行）
    for (int i = 1; i <= n; i++)
    {
        // 打印前置空格
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // 打印字符与中间空格
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
            {
                cout << ch;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    // 打印下半部分
    for (int i = n - 1; i >= 1; i--)
    {
        // 打印前置空格
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // 打印字符与中间空格
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
            {
                cout << ch;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
```

</details>

<details>
<summary>输出实心菱形</summary>

```cpp
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int n;
    cout << "请输入绘图字符：";
    cin >> ch;
    cout << "请输入菱形上半部分行数：";
    cin >> n;
    // 上半部分（含中间行）
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << ch;
        }
        cout << endl;
    }
    // 下半部分
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
```

</details>

<details>
<summary>输出n行N字形</summary>

```cpp
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (j == 0 || j == n - 1 || i == j)
        {
            cout << ch;
        }
        else
        {
            cout << " ";
        }
        cout << endl;
    }
}
```

</details>

<details>
<summary>输出n行X字形</summary>

```cpp
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (i == j || i + j == n - 1)
        {
            cout << ch;
        }
        else
        {
            cout << " ";
        }
        cout << endl;
    }
}
```

</details>

<details>
<summary>输出n行反N字型</summary>

```cpp
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (j == 0 || j == n - 1 || i + j == n - 1)
        {
            cout << ch;
        }
        else
        {
            cout << " ";
        }
        cout << endl;
    }
}
```

</details>

<details>
<summary>输出n行Z字形</summary>

```cpp
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (i == 0 || i == n - 1 || i + j == n - 1)
        {
            cout << ch;
        }
        else
        {
            cout << " ";
        }
        cout << endl;
}
```

</details>

<details>
<summary>阶梯状输出数字</summary>

```cpp
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    {
        cout << num;
        if (j != i)
        {
            cout << " ";
        }
        num++;
    }
    cout << endl;
}
```

</details>

<details>
<summary>正方形输出数字</summary>

```cpp
int num = 1;
for (int i = 1; i <= n; i++)
{
    if (i % 2 == 1)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << num;
            if (j != n)
            {
                cout << " ";
            }
            num++;
        }
    }
    else
    {
        int end = num + n - 1;
        for (int j = end; j >= num; j--)
        {
            cout << j;
            if (j != num)
            {
                cout << " ";
            }
        }
        num += n;
    }
    cout << endl;
}
```

</details>

</details>

## 字符及字符串
### 读取整行
```cpp
string s, p, q;
// 读取一行（含空格）到 string，遇到换行符停止，换行符被丢弃不存入
getline(cin, s);

// 读取单个字符（包括空格、Tab、换行）存入 p
cin.get(p);

// 丢弃最多 q 个字符；若中途遇到 delim 则提前停止（delim 也被丢弃）
// 默认 delim 为 EOF，故 cin.ignore(q) 就是丢弃 q 个字符
cin.ignore(q);
cin.ignore(q, '\n');   // 常用：清到行尾
```
### 按照原样输出（可多行）
```cpp
cout << R"(////origin$raw\\\\
jjjjjj///nnn\\\)" << endl;
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
###### 数学方法
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
###### 字符串方法
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
#### find函数
```cpp
string s; cin >> s; // Hello World为例
char c; cin >> c; // 查找字符为o
cout << s.find(c) << endl; // 输出为4，从0开始计数，o在第5位
```
#### 遍历字符串
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
string s; cin >> s; // Hello! World为例，i=5
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
string s; cin >> s; // Hello! World为例
s.pop_back(); // 删除末尾字符，输出为Hello World
cout << s << endl; // Hello World
```
### 截取字符串
```cpp
string s; cin >> s; // Hello! World为例，i=5，len=3
string str = s.substr(i, len); // 截取第5位开始的3个字符，输出为! W
cout << str << endl; // ! W
```
### 字符串转大小写
#### isxxx函数
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
#### 字符串查找字符首次出现位置
```cpp
char c; cin >> c; // 查找字符为c，是否是大写元音字母
if (isupper(c) && !strchr("AEIOU", c)) cout << "yes" << endl; 
// 输出为yes
```
#### 字符加减
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
### 判断及转换字符
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
#### 转`int`，同时可去除前导零
```cpp
string s; // 全称叫Strig TO Int
stoi(s); // 将字符串s转为int
```
#### 转`long long`
```cpp
string s; // 全称叫Strig TO Long Long
stoll(s); // 将字符串s转为long long
```
#### 转`double`
```cpp
string s; // 全称叫Strig TO Double
stod(s); // 将字符串s转为double
```
#### 转`float`
```cpp
string s; // 全称叫Strig TO Float
stof(s); // 将字符串s转为float
```
#### 转`long double`
```cpp
string s; // 全称叫Strig TO Long Double
stold(s); // 将字符串s转为long double
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
### 统计数字$a$中数字$b$的个数
```cpp
int a, b; cin >> a >> b;
int cnt = 0;
if (a == 0 && b == 0) cnt++; // 特判 a=0 的情况
while (a > 0)
{
    if (a % 10 == b) cnt++;
    a /= 10;
}
cout << cnt << endl;
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
    // 如果数太大，可以写 i <= x / i 防止溢出
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
### 判断完数
完数（也称完全数，完美数）：一个正整数等于其所有真因子（除自身外的约数）之和。如 6=1+2+3，28=1+2+4+7+14。偶完数公式：$2^{p-1}(2^p-1)$，其中 $2^p-1$ 为梅森素数。
#### 暴力版($O(n)$)
```cpp
int sum = 0;
for (int i = 1; i < n; i++)
{
    if (n % i == 0) sum += i;
}
if (sum == n) cout << "Yes" << endl;
else cout << "No" << endl;
```
#### 优化版($O(\sqrt{n})$)
```cpp
int sumDiv(int n)
{
    if (n == 1) return 0;
    int sum = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum;
}
signed main()
{
    // 输入 n
    if (sumDiv(n) == n) cout << "Yes" << endl;
    else cout << "No" << endl;
}
```
### 判断水仙花数
水仙花数（一般指三位数的）：三位数，各位数字的立方和等于本身。三位数共 4 个：153、370、371、407

> 水仙花数其实是自幂数的一种，
> 自幂数是指一个 n 位数，其各位数字的 n 次幂之和等于该数本身。
> 所以水仙花数是n=3的自幂数。

通用版自幂数
```cpp
bool isSelfPow(int n)
{
    string s = to_string(n);
    int k = s.size(), sum = 0;
    for (char ch : s)
    {
        int d = ch - '0', p = 1;
        for (int j = 0; j < k; j++) p *= d;
        sum += p;
    }
    return sum == n;
}
```
### 相亲数

两个正整数 $a$、$b$，若 $a$ 的所有真因子（除自身外的因数）之和等于 $b$，且 $b$ 的所有真因子之和等于 $a$，则称它们是一对亲和数。

$$s(a) = b, \quad s(b) = a$$



| 类型 | 条件 | 例子 |
|---|---|---|
| **完全数** | $s(n) = n$（自身循环） | 6, 28, 496 |
| **亲和数** | $s(a)=b,\ s(b)=a$（2 个数循环） | (220, 284) |
| **社交数**（多亲数） | $s(a_1)=a_2,\ ..., s(a_k)=a_1$，$k \ge 3$ | 12496→14288→15472→14536→14264→12496 |

三者可统一称为**亲和数**（amicable numbers），都与真因子和有关。


> 判断亲和数时必须**双向验证** $s(s(n)) = n$，且排除 $s(n) = n$ 的完全数情况，否则 16（$s(16)=15$，但 $s(15)=9$）这类单向数会被误判。

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
###### 模拟数学方法
```cpp
int n; cin >> n;
if (n == 0)
{
    cout << 0 << endl;
    return 0;
}
int high = 0;
for (int i = 30; i >= 0; i--)
{
    if ((n >> i) & 1)
    {
        high = i;
        break;
    }
}
for (int i = high; i >= 0; i--)
{
    cout << ((n >> i) & 1);
}
cout << endl;
return 0;
```
###### 数组模拟
```cpp
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
```
##### 有前导零，位宽8
###### 位运算
```cpp
for (int i = 7; i >= 0; i--)
{
    cout << ((n >> i) & 1);
}
```

###### bitset
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
#### 递归
```cpp
int factorial(int n)
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
```
#### 循环
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
#### 函数
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
$n$个人围成一圈，从某个人开始报数，报到$m$的人出列，剩下的人继续报数，直到最后只剩一人，求最后留下的人的编号。递推公式：$f(1)=0$; $f(i)=(f(i-1)+k)\mod i$，最终答案 `+1` 转为 1-based 编号
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
### 一年中的第几天
```cpp
int a, b, c; cin >> a >> b >> c;
int sum[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
int total = sum[b] + c;
if (((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) && b > 2)
{
       total++;
}
cout << total << endl;
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
    int a, b; cin >> a >> b;
    cout << "手写gcd: " << gcd_own(a, b) << endl;
    cout << "手写lcm: " << lcm_own(a, b) << endl;
    // std::gcd，std::lcm在C++17/GNU++17及后续版本中引入
    // 很多OJ的bits/stdc++.h已经包含
    cout << "库gcd: " << gcd(a, b) << endl;
    cout << "库lcm: " << lcm(a, b) << endl;
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
有关前缀和的更多语法，参见[Contest Template](./Contest%20Template.md)
#### 删除指定值
```cpp
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
```
#### 找出不是两数组共有的元素
```cpp
vector<int> arr1, arr2;
int n1, n2; cin >> n1;
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
```

<details>
<summary>开关灯</summary>

#### 经典题（开关灯）
假设有 N 盏灯（N 为不大于 5000 的正整数），从 1  到 N 按顺序依次编号，初始时全部处于开启状态；有 M 个人（M 为不大于 N 的正整数）也从 1 到 M 依次编号。
第一个人（1 号）将灯全部关闭，第二个人（2 号）将编号为 2 的倍数的灯打开，第三个人（3 号）将编号为 3 的倍数的灯做相反处理（即，将打开的灯关闭，将关闭的灯打开）。依照编号递增顺序，以后的人都和 3 号一样，将凡是自己编号倍数的灯做相反处理。
请问：当第 M 个人操作之后，哪几盏灯是关闭的，按从小到大输出其编号，其间用逗号间隔。
输入格式:
输入正整数 N 和 M，以单个空格隔开，M ≤ N。
输出格式:
顺序输出关闭的灯的编号，各编号之间用逗号间隔。

</details>

#### 向有序数列插入整数
```cpp
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
```
#### 有序序列合并
```cpp
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

<!-- ---

下面的内容将会在学完之后再补充
## 指针
## 结构体
## 类
## STL
##  -->