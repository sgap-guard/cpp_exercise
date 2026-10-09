#include <bits/stdc++.h>
using namespace std;

// ========== 全局变量 ==========
// n：数的总个数
// k：需要选出的数的个数
// ans：记录和为素数的组合数
// x[25]：存储输入的 n 个数（数组开到 25，因为 n <= 20）
int n, k, ans = 0;
int x[25];

// ========== 素数判断函数 ==========
// 判断整数 n 是否为素数
// 素数定义：大于 1 且只能被 1 和自身整除的数
bool is_prime(int n)
{
    // 小于等于 1 的数不是素数
    if (n <= 1) return false;

    // 试除法：从 2 试除到 sqrt(n)
    // 如果 i 能整除 n，说明 n 不是素数
    // 只需要试除到 sqrt(n)，因为如果 n 有大于 sqrt(n) 的因子
    // 那么它一定有一个小于 sqrt(n) 的对应因子
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0) return false;
    }

    // 试除完都没有因子，说明 n 是素数
    return true;
}

// ========== DFS 枚举组合 ==========
// 参数说明：
//   pos   ：当前考虑第几个数（从 pos 开始选）
//   count ：当前已经选了几个数
//   sum   ：当前已选数的和
void dfs(int pos, int count, int sum)
{
    // ========== 终止条件 1：已经选了 k 个数 ==========
    if (count == k)
    {
        // 判断当前和是否为素数
        if (is_prime(sum))
        {
            ans++;   // 是素数，计数器加 1
        }
        return;      // 返回上一层
    }

    // ========== 终止条件 2：没有数可选了 ==========
    // 如果 pos > n，说明已经考虑完所有数，但还没选够 k 个
    // 这种情况不会产生合法组合，直接返回
    if (pos > n) return;

    // ========== 分支 1：选第 pos 个数 ==========
    // 选了第 pos 个数，所以 count + 1，sum + x[pos]
    // 下一步考虑第 pos + 1 个数
    dfs(pos + 1, count + 1, sum + x[pos]);

    // ========== 分支 2：不选第 pos 个数 ==========
    // 不选第 pos 个数，count 和 sum 不变
    // 下一步考虑第 pos + 1 个数
    dfs(pos + 1, count, sum);
}

signed main()
{
    // 开启输入输出加速
    ios::sync_with_stdio(false);
    cin.tie(0);

    // 读入 n 和 k
    cin >> n >> k;

    // 读入 n 个数，存入数组 x（1-based，从 x[1] 开始）
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }

    // 从第 1 个数开始考虑，当前选了 0 个数，当前和为 0
    dfs(1, 0, 0);

    // 输出结果
    cout << ans << '\n';
    return 0;
}