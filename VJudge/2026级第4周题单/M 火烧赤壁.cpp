#include <bits/stdc++.h>
using namespace std;

// ========== 全局数组 ==========
// interval[i] 存储第 i 个区间，first 是左端点，second 是右端点
// 用 pair<long long, long long> 存储，因为坐标范围到 2^31，超过 int
// 数组大小开到 100005，因为 n <= 2*10^4，多开一些防止越界
pair<long long, long long> interval[100005];

signed main()
{
    // 读取区间数量 n
    int n;
    cin >> n;

    // ========== 第 1 步：读入所有区间 ==========
    for (int i = 1; i <= n; i++)
    {
        // 读入区间端点 a, b
        // 虽然 a, b 在 int 范围内，但为了后续排序和计算安全，用 long long 存储
        int a, b;
        cin >> a >> b;

        // 用列表初始化构造 pair，存储到 interval[i]
        interval[i] = {a, b};
    }

    // ========== 第 2 步：按左端点升序排序 ==========
    // pair 默认按 first 升序排序，如果 first 相同则按 second 升序
    // 排序后，区间按左端点从小到大排列，方便后续贪心合并
    sort(interval + 1, interval + n + 1);

    // ========== 第 3 步：初始化当前合并区间 ==========
    // L 和 R 分别表示当前正在合并的区间的左端点和右端点
    // 初始为第一个区间
    long long L = interval[1].first;
    long long R = interval[1].second;

    // ans 存储并集总长度
    long long ans = 0;

    // ========== 第 4 步：遍历剩余区间，贪心合并 ==========
    for (int i = 2; i <= n; i++)
    {
        // 取出当前区间的左右端点
        long long a = interval[i].first;
        long long b = interval[i].second;

        // 判断当前区间是否与 [L, R] 重叠
        if (a > R)
        {
            // 不重叠：当前区间的左端点 > 当前合并区间的右端点
            // 说明 [L, R] 已经无法再扩展，结算它的长度
            ans += R - L;

            // 更新当前合并区间为新的区间 [a, b]
            L = a;
            R = b;
        }
        else
        {
            // 重叠：当前区间的左端点 <= 当前合并区间的右端点
            // 说明两个区间有交集，需要扩展右端点
            if (b > R)
            {
                R = b;
            }
            // 如果 b <= R，说明当前区间完全被 [L, R] 包含，不需要更新
        }
    }

    // ========== 第 5 步：结算最后一个合并区间 ==========
    // 循环结束后，[L, R] 还没有被结算，加上它的长度
    ans += R - L;

    // 输出答案并换行
    cout << ans << endl;
    return 0;
}