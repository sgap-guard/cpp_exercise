#include <bits/stdc++.h> // 包含C++所有标准库的万能头文件
#define int long long    // 宏定义：将所有的int替换为long long，防止元素求和时溢出
using namespace std;     // 使用标准命名空间

signed main()            // 因为上面把int宏定义成了long long，所以main函数返回值必须写signed
{
    // 1. 输入输出加速（数据量较大时必须加，否则容易超时TLE）
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q; // 读取矩阵的行数n、列数m、以及查询次数q

    // 2. 定义二维前缀和数组
    // 大小为 (n+1) x (m+1)，初始值全为0。
    // 多开第0行和第0列的目的是：当公式中出现 i-1 或 j-1 时，直接访问第0行/列即可，无需特判边界。
    vector<vector<int>> pre(n + 1, vector<int>(m + 1, 0));
    // vector<int>(x,y)代表一个长度为x，初始值为y的数组
    // pre(x,y)代表一个x行y列的二维数组，初始值全为0。
    // pre[x][y]代表第x行第y列的元素

    // 3. 构建二维前缀和
    for (int i = 1; i <= n; i++) // 从第1行开始遍历
    {
        for (int j = 1; j <= m; j++) // 从第1列开始遍历
        {
            int temp; cin >> temp; // 读取原矩阵中 (i, j) 位置的元素
            
            // 核心递推公式（利用容斥原理）：
            // pre[i][j] 代表从 (1,1) 到 (i,j) 这个矩形内所有元素的和
            // pre[i-1][j] 是上方的矩形和，pre[i][j-1] 是左方的矩形和
            // 两者相加时，左上角 pre[i-1][j-1] 被加了两次，所以要减去一次
            // 最后加上当前格子本身的值 temp
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + temp;
        }
    }

    // 4. 处理每一次查询
    while (q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2; // 读取查询的子矩阵左上角 (x1, y1) 和右下角 (x2, y2)

        // 核心查询公式（利用容斥原理）：
        // pre[x2][y2] 是整个大矩形（从(1,1)到(x2,y2)）
        // 减去上方的矩形 pre[x1-1][y2]
        // 减去左方的矩形 pre[x2][y1-1]
        // 此时左上角的矩形 pre[x1-1][y1-1] 被减了两次，加回来一次
        cout << pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1] << endl;
    }
    
    return 0;
}