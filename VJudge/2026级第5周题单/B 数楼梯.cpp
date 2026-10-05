#include <bits/stdc++.h>
using namespace std;

// ========== 定义大整数类型 ==========
// 用 vector<int> 存储大整数，下标 0 存个位，下标 1 存十位，依此类推（低位在前）
// 例如数字 1234 存储为 {4, 3, 2, 1}
typedef vector<int> BigInt;

// ========== 高精度加法函数 ==========
// 输入：两个大整数 a 和 b（低位在前）
// 输出：a + b 的结果（低位在前）
BigInt add(const BigInt &a, const BigInt &b)
{
    BigInt c;              // 存储结果
    int carry = 0;         // 进位，初始为 0
    int len = max(a.size(), b.size());  // 两个数中较长的位数

    // 从低位到高位逐位相加，或者还有进位未处理时继续循环
    for (int i = 0; i < len || carry; ++i)
    {
        int sum = carry;   // 当前位的和，初始为进位

        // 如果 a 还有第 i 位，加上 a[i]
        if (i < a.size()) sum += a[i];

        // 如果 b 还有第 i 位，加上 b[i]
        if (i < b.size()) sum += b[i];

        // 当前位的数字 = sum % 10，存入结果
        c.push_back(sum % 10);

        // 进位 = sum / 10，留给下一位
        carry = sum / 10;
    }

    return c;
}

// ========== 大整数输出函数 ==========
// 输入：一个大整数（低位在前）
// 输出：从高位到低位打印，即正常的数字形式
void printBigInt(const BigInt &num)
{
    // 如果 num 为空（理论上不会发生），输出 0
    if (num.empty())
    {
        cout << 0 << endl;
        return;
    }

    // 从最高位（num.size() - 1）到最低位（0）依次输出
    for (int i = num.size() - 1; i >= 0; --i)
    {
        cout << num[i];
    }
    cout << endl;
}

// ========== 主函数 ==========
int main()
{
    // 开启输入输出加速
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    // 读取楼梯数 N
    if (cin >> N)
    {
        // 特判 N = 1：只有 1 种走法（走 1 阶）
        if (N == 1)
        {
            cout << 1 << endl;
        }
        // 特判 N = 2：有 2 种走法（1+1 或 2）
        else if (N == 2)
        {
            cout << 2 << endl;
        }
        // N >= 3 时，使用斐波那契递推
        else
        {
            // 初始化：
            // prev2 表示第 1 项，值为 1
            // prev1 表示第 2 项，值为 2
            // 注意：这里的递推关系是 f(n) = f(n-1) + f(n-2)
            // 其中 f(1) = 1, f(2) = 2, f(3) = 3, f(4) = 5, ...
            // 这与标准斐波那契数列（1, 1, 2, 3, 5, ...）偏移了一位
            BigInt prev2 = {1};   // f(1) = 1
            BigInt prev1 = {2};   // f(2) = 2
            BigInt current;       // 临时变量，存储当前项

            // 从第 3 项开始递推到第 N 项
            for (int i = 3; i <= N; ++i)
            {
                // 递推公式：f(i) = f(i-1) + f(i-2)
                current = add(prev1, prev2);

                // 滚动更新：
                // prev2 变成原来的 prev1（即 f(i-1)）
                // prev1 变成 current（即 f(i)）
                prev2 = prev1;
                prev1 = current;
            }

            // 最终 prev1 存储的是 f(N)，输出
            printBigInt(prev1);
        }
    }
    return 0;
}


// 如果N<=90，不用高精度，代码如下
// #include <bits/stdc++.h>
// using namespace std;

// long long memo[105];   // 记忆化数组，memo[i] 存储 f(i)

// long long f(int n)
// {
//     // 递归边界
//     if (n == 1) return 1;
//     if (n == 2) return 2;

//     // 如果已经计算过，直接返回
//     if (memo[n] != 0) return memo[n];

//     // 递归计算并存入记忆化数组
//     return memo[n] = f(n - 1) + f(n - 2);
// }

// int main()
// {
//     int N;
//     cin >> N;
//     cout << f(N) << '\n';
//     return 0;
// }