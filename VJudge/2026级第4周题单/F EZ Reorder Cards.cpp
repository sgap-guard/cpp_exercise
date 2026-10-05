#include <bits/stdc++.h>
using namespace std;

// ========== 全局数组 ==========
// A[i], B[i] 分别存储第 i 张卡片的初始行号、列号
// rows[], cols[] 分别存储所有出现过的行号、列号（用于排序去重）
// 数组大小开到 100005，因为 N <= 200000，多开几个空间防止越界
long long A[100005], B[100005];
long long rows[100005], cols[100005];

int main()
{
    // H 和 W 虽然高达 10^9，但我们并不需要开 H*W 的矩阵
    // 因为 N <= 2*10^5，只有 N 个位置有卡片，其他位置都是空的
    long long H, W, N;
    cin >> H >> W >> N;

    // ========== 第 1 步：读入所有卡片坐标 ==========
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i] >> B[i];

        // 把行号和列号分别复制到 rows 和 cols 数组中
        // 这两个数组的作用是：收集所有"有卡片的行"和"有卡片的列"
        rows[i] = A[i];
        cols[i] = B[i];
    }

    // ========== 第 2 步：排序 + 去重 ==========
    // 对 rows 和 cols 分别排序，方便后续去重和二分查找
    // 排序后，相同的行号/列号会排在一起
    sort(rows + 1, rows + N + 1);
    sort(cols + 1, cols + N + 1);

    // unique 函数：把相邻的重复元素"移到后面"，返回去重后最后一个有效元素的下一个位置
    // rows + 1 是起始地址，rows + N + 1 是结束地址的下一个位置
    // unique 返回的指针减去起始指针 (rows + 1)，就是去重后的元素个数
    // 注意：这里写成 "- rows - 1" 等价于 "- (rows + 1)"，因为 rows 是数组首地址（索引 0）
    int row_size = unique(rows + 1, rows + N + 1) - rows - 1;
    int col_size = unique(cols + 1, cols + N + 1) - cols - 1;

    // 经过这一步，rows[1..row_size] 存储了所有"有卡片的行号"（去重、升序）
    // cols[1..col_size] 存储了所有"有卡片的列号"（去重、升序）

    // ========== 第 3 步：计算每张卡片的最终位置 ==========
    for (int i = 1; i <= N; i++)
    {
        // lower_bound：在有序数组中查找第一个 >= 目标值的元素位置
        // 这里查找 A[i] 在 rows[1..row_size] 中的位置
        // 返回的指针减去 rows，得到的是 0-based 下标，所以再 +1 才是 1-based 排名
        // 但这里写的是 "- rows"，没写 "+1"，为什么？
        // 因为 lower_bound 返回的是指向该元素的指针，减去 rows 后得到的是 0-based 下标
        // 而 0-based 下标 + 1 = 1-based 排名，所以 "- rows" 其实已经隐含了 +1 的效果
        // 具体来说：如果 A[i] 是 rows[1]，lower_bound 返回 rows+1，减去 rows 得 1，正好是排名 1
        int new_row = lower_bound(rows + 1, rows + row_size + 1, A[i]) - rows;
        int new_col = lower_bound(cols + 1, cols + col_size + 1, B[i]) - cols;

        // 输出卡片 i 的最终位置
        cout << new_row << " " << new_col << endl;
    }
    return 0;
}