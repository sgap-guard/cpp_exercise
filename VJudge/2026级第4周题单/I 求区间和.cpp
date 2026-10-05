#include <bits/stdc++.h>
using namespace std;

// ========== 全局数组 ==========
// A[i]：存储原数组的第 i 个元素
// pfX[i]：存储前缀和，即 A[1] + A[2] + ... + A[i]
// 数组大小开到 100005，因为 n <= 100000，多开几个防止越界
int A[100005], pfX[100005];

// 使用 signed main 等价于 int main，是竞赛中的习惯写法
signed main()
{
    // 读取数组长度 n
    int n; cin >> n;

    // 前缀和的初始边界：pfX[0] = 0
    // 数学意义：前 0 个元素的和为 0，这是递推的起点
    pfX[0] = 0;

    // ========== 预处理前缀和 ==========
    // 遍历数组，读入 A[i] 的同时计算前缀和
    for(int i = 1; i <= n; i++)
    {
        cin >> A[i];

        // 前缀和递推公式：pfX[i] = pfX[i-1] + A[i]
        // 含义：前 i 个元素的和 = 前 i-1 个元素的和 + 第 i 个元素
        pfX[i] = pfX[i-1] + A[i];
    }

    // 读取询问次数 m
    int m; cin >> m;

    // ========== 处理每组询问 ==========
    for(int i = 1; i <= m; i++)
    {
        // 读取询问区间 [l, r]
        int l, r; cin >> l >> r;

        // 利用前缀和公式计算区间和：
        // Sum(l, r) = pfX[r] - pfX[l-1]
        // 数学推导：
        //   pfX[r] = A[1] + ... + A[l-1] + A[l] + ... + A[r]
        //   pfX[l-1] = A[1] + ... + A[l-1]
        //   相减得：pfX[r] - pfX[l-1] = A[l] + ... + A[r]
        long long ans = pfX[r] - pfX[l-1];

        // 输出区间和并换行
        cout << ans << endl;
    }
    return 0;
}