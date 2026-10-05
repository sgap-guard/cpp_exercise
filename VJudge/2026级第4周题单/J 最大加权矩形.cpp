#include <bits/stdc++.h>
using namespace std;

// 用宏把 int 替换成 long long，防止后续计算溢出
// 注意：这会使得 main 的返回值也变成 long long，所以 main 要用 signed main
#define int long long

// ========== 全局数组 ==========
// A[i][j]：存储矩阵第 i 行第 j 列的元素
// b[k]：一维压缩数组，b[k] = 第 i 行到第 j 行第 k 列的元素之和
// 数组大小开到 125，因为题目 n <= 120，多开几个防止越界
static int A[125][125], b[125];

signed main()
{
    // 开启输入输出加速
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 读入矩阵大小 n
    int n;
    cin >> n;

    // ========== 第 1 步：读入矩阵 ==========
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }

    // 初始化最大子矩阵和为负无穷
    // 因为矩阵元素可能全为负数，所以不能用 0 初始化
    long long MaxSum = -1e18;

    // ========== 第 2 步：枚举上边界 i ==========
    for (int i = 1; i <= n; i++)
    {
        // 每次枚举新的上边界时，清空 b 数组
        // 因为 b 数组是累加的，上一轮 i 的残留值会影响本轮结果
        for (int k = 1; k <= n; k++)
        {
            b[k] = 0;
        }

        // ========== 第 3 步：枚举下边界 j ==========
        for (int j = i; j <= n; j++)
        {
            // 将第 j 行的元素累加到 b 中
            // 经过这一步，b[k] = A[i][k] + A[i+1][k] + ... + A[j][k]
            // 即第 i 行到第 j 行第 k 列的所有元素之和
            for (int k = 1; k <= n; k++)
            {
                b[k] += A[j][k];
            }

            // ========== 第 4 步：对 b 求最大子段和（Kadane 算法） ==========
            // dp 表示以第 k 个元素结尾的最大子段和
            long long dp = 0;
            for (int k = 1; k <= n; k++)
            {
                // Kadane 递推公式：
                // dp = max(dp + b[k], b[k])
                //
                // 数学含义：
                //   要么把 b[k] 接在前面的子段后面（dp + b[k]）
                //   要么从 b[k] 重新开始一个新的子段（b[k]）
                //   取两者中较大的
                dp = max(dp + b[k], b[k]);

                // 更新全局最大值
                if (dp > MaxSum)
                {
                    MaxSum = dp;
                }
            }
        }
    }

    // ========== 第 5 步：输出结果 ==========
    cout << MaxSum << '\n';
    return 0;
}