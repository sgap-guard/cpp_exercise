#include <bits/stdc++.h>
using namespace std;

// ========== 全局数组 ==========
// d[i]：差分数组，d[i] = a[i] - a[i-1]
// a[i]：存储初始成绩（其实可以省略，但为了逻辑清晰保留）
// 数组大小开到 5000005，因为题目 n <= 5*10^6，多开几个防止越界
// static 修饰全局数组，限制链接属性（单文件程序中可省略）
static long long d[5000005], a[5000005];

signed main()
{
    // 读入学生数 n 和操作次数 p
    int n, p;
    cin >> n >> p;

    // 差分数组的边界初始化（全局数组默认就是 0，这行可省略）
    d[0] = 0;

    // prev 记录前一个学生的成绩，用于计算差分
    long long prev = 0;

    // ========== 第 1 步：读入初始成绩，构造差分数组 ==========
    for (int i = 1; i <= n; i++)
    {
        // 读入第 i 个学生的初始成绩
        cin >> a[i];

        // 差分公式：d[i] = a[i] - a[i-1]
        // 这里 prev 就是 a[i-1]，初始时 prev = a[0] = 0
        d[i] = a[i] - prev;

        // 更新 prev 为当前成绩，供下一次循环使用
        prev = a[i];
    }

    // ========== 第 2 步：处理 p 次区间加分操作 ==========
    for (int k = 1; k <= p; k++)
    {
        // 读入操作：给第 x 到第 y 个学生每人加 z 分
        int x, y, z;
        cin >> x >> y >> z;

        // 差分数组核心操作：
        // d[x] += z   表示从 x 开始，后面所有学生的成绩都增加 z
        // d[y+1] -= z 表示从 y+1 开始，撤销增加，恢复原值
        // 最终效果：只有区间 [x, y] 内的学生成绩增加了 z
        d[x] += z;
        d[y + 1] -= z;
    }

    // ========== 第 3 步：前缀和还原 + 求最小值 ==========
    // current 记录当前位置的实际成绩（前缀和）
    long long current = 0;

    // MinScore 初始化为一个很大的数，用于找最小值
    // 1e18 是 double 类型，赋给 long long 会有隐式转换
    // 更规范的写法是用 LLONG_MAX
    long long MinScore = 1e18;

    for (int i = 1; i <= n; i++)
    {
        // 前缀和还原：current = a[1] + ... + a[i]
        // 等价于 current += d[i]，因为 a[i] = sum(d[1..i])
        current += d[i];

        // 更新最小值
        if (current < MinScore)
        {
            MinScore = current;
        }
    }

    // ========== 第 4 步：输出最低分 ==========
    cout << MinScore << endl;
    return 0;
}