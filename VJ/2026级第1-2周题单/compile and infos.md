## 📝 刷题最简选择策略（给你直接背）
1. **题目涉及小数计算（面积、温度、方程）**：直接 `double` ✔
2. **纯整数题目，数字不大**：`int`
3. **纯整数题目，数字很大、相乘容易溢出**：`long long`
4. **循环变量、计数、判断是否相等**：优先整数类型，不用double
5. **布尔判断真假**：`bool`
6. **小数计算 → `double`**，不要`float`
7. **普通整数 → `int`**；整数相乘容易变大 → `long long`
8. **真假标记 → `bool`**
9. **`unsigned`系列（`unsigned int`、`unsigned long`）尽量不用**，负数会诡异出错，平台兼容性差

---

## 汇总表（刷题版）
| 类型 | 能否存小数 | 是否有负数 | 典型大小 | 适用场景 |
| ---- | ---- | ---- | ---- | ---- |
| `bool` | ❌ | - | 1B | 真假判断 |
| `int` | ❌ | ✅ | 4B | 普通不大的整数 |
| `unsigned int` | ❌ | ❌ | 4B | 极少用，非负整数 |
| `long long` | ❌ | ✅ | 8B | 很大整数，防止溢出 |
| `unsigned long` | ❌ | ❌ | 4B/8B | 不推荐OJ使用 |
| `float` | ✅ | ✅ | 4B | 小数，精度低，少用 |
| `double` | ✅ | ✅ | 8B | 小数计算，刷题首选 |

---

##常见头文件

`#include <iostream>`
`#include <iomanip>`
`#include <cmath>`

`cout << fixed << setprecision(5) <<  C << endl;`

乘方的语言：`pow(x,2)`


```
string s;
    cin >> s;
    int len = s.size();
    int mid = len - 2;
    if(len > 10)
    {cout << s[0] << mid << s[len-1] << endl;}
```