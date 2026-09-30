下面用 `vector<int>`（或 `vector<char>`）模拟大整数，计算超过 `unsigned long long` 上限的阶乘。核心思想是**把每一位数字存进 vector，逐位乘以 $i$ 并处理进位**。

## 一、基本思路

计算 $n!$ 时，维护一个数组表示当前结果。初始为 $1$，然后依次乘 $2, 3, \dots, n$。

对于每一位：

$$
\text{prod} = \text{digit}[j] \times i + \text{carry}
$$

$$
\text{digit}[j] = \text{prod} \bmod 10, \quad \text{carry} = \left\lfloor \frac{\text{prod}}{10} \right\rfloor
$$

乘完所有位后，把剩余进位不断取模、除 $10$，依次压入数组。

约定：**低位在前**（`digits[0]` 是个位），这样进位方便追加；输出时反向遍历。

## 二、完整代码（Allman 风格）

```cpp
#include <iostream>
#include <vector>
using namespace std;

// 计算 n!，返回各位数字，低位在前（digits[0] 为个位）
vector<int> bigFactorial(int n)
{
    vector<int> digits;
    digits.push_back(1);  // 初始为 1

    for (int i = 2; i <= n; ++i)
    {
        int carry = 0;
        for (size_t j = 0; j < digits.size(); ++j)
        {
            int prod = digits[j] * i + carry;
            digits[j] = prod % 10;
            carry = prod / 10;
        }
        // 处理剩余进位
        while (carry > 0)
        {
            digits.push_back(carry % 10);
            carry /= 10;
        }
    }
    return digits;
}

// 输出结果（高位在前）
void printBigNumber(const vector<int>& digits)
{
    for (auto it = digits.rbegin(); it != digits.rend(); ++it)
    {
        cout << *it;
    }
    cout << endl;
}

int main()
{
    int n = 100;
    vector<int> res = bigFactorial(n);

    cout << n << "! = ";
    printBigNumber(res);

    // 位数 = floor(log10(n!)) + 1
    cout << "位数: " << res.size() << endl;
    return 0;
}
```

## 三、为什么用 `int` 而不是 `char`

每一位是 $0 \sim 9$。用 `int` 存储时，单步乘法 $9 \times n + \text{carry}$ 在 $n$ 为几千时也不会溢出 `int`（上限 $2.1\times10^9$），所以安全且直观。

若想省内存，可用 `vector<char>`，但要注意 `char` 的符号性和乘法提升问题，写起来稍麻烦：

```cpp
vector<char> digits;
digits.push_back(1);
// 乘法时仍需提升为 int 计算，例如：
int prod = static_cast<int>(digits[j]) * i + carry;
```

一般竞赛/日常用 `vector<int>` 就够。

## 四、性能与优化

上面写法每次乘法都遍历所有位。计算 $n!$ 的总复杂度约为：

$$
O\left(\sum_{i=2}^{n} d(i)\right)
$$

其中 $d(i)$ 是 $i!$ 的位数，近似为 $O(n \log n)$ 级别，算 $1000!$ 毫无压力。

**进一步优化**：一次乘一个较大的数（如把 $i$ 拆成不超过 $10^9$ 的块，用 `long long` 承载），减少进位次数：

```cpp
// 以 1e9 为基，每“位”存 9 个十进制数字
vector<long long> bigFactorialBase(int n)
{
    const long long BASE = 1000000000LL;
    vector<long long> digits;
    digits.push_back(1);

    for (int i = 2; i <= n; ++i)
    {
        long long carry = 0;
        for (size_t j = 0; j < digits.size(); ++j)
        {
            long long prod = digits[j] * i + carry;
            digits[j] = prod % BASE;
            carry = prod / BASE;
        }
        while (carry > 0)
        {
            digits.push_back(carry % BASE);
            carry /= BASE;
        }
    }
    return digits;
}
```

输出时最高位直接打印，其余位需要**补零到 9 位**：

```cpp
void printBase(const vector<long long>& digits)
{
    // 最高位（数组末尾）
    cout << digits.back();
    // 其余位补齐 9 位
    for (auto it = digits.rbegin() + 1; it != digits.rend(); ++it)
    {
        cout.width(9);
        cout.fill('0');
        cout << *it;
    }
    cout << endl;
}
```

## 五、小结

| 方案 | 基数 | 适用 |
|------|------|------|
| `vector<int>` 每位存 1 位 | $10$ | 简单、直观，够用 |
| `vector<long long>` 每位存 9 位 | $10^9$ | 更快、更省内存 |

要点：

1. **低位在前**，方便处理进位和追加。
2. 每轮乘法逐位计算 `prod = digit * i + carry`，更新当前位并传递进位。
3. 乘完后把剩余进位持续压栈。
4. 输出时**反向遍历**，多基表示时非最高位要补零。

这样即可轻松算出 $1000!$ 甚至更大（$1000!$ 约有 $2568$ 位），远超 `unsigned long long` 的 $20!$ 上限。