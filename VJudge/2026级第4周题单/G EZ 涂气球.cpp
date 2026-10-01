#include<bits/stdc++.h>
using namespace std;

int all[200005];

int main()
{
    // 关闭 C 和 C++ 标准流的同步，大幅提升 cin/cout 的读取速度
    ios::sync_with_stdio(false);
    
    // 解绑 cin 和 cout，避免每次输入前自动刷新输出缓冲区，进一步加速
    cin.tie(0); cout.tie(0);
    
    // 读取气球总数 n 和涂色操作总次数 m
    int n, m; cin >> n >> m;
    
    // 循环 m 次，处理每一次涂色操作
    for (int i = 1; i <= m; i++)
    {
        // 读取当前涂色区间的左右端点 a 和 b
        int a, b;
        cin >> a >> b;
        
        // 差分数组核心操作（左端点加）：
        // 数学意义：D_a = D_a + 1
        // 表示从第 a 个气球开始，后续所有的气球（前缀和）都将增加 1
        all[a]++;
        
        // 差分数组核心操作（右端点的后一个位置减）：
        // 数学意义：D_{b+1} = D_{b+1} - 1
        // 表示从第 b+1 个气球开始，抵消掉前面的增加，恢复原样
        all[b+1]--;
    }

    // 循环遍历 1 到 n，利用前缀和还原每个气球的真实涂色次数
    for (int i = 1; i <= n; i++)
    {
        // 前缀和还原公式：
        // 设原数组为 A，差分数组为 D，则 A_i = A_{i-1} + D_i
        // 等价于 A_i = \sum_{j=1}^{i} D_j
        all[i] += all[i - 1];
        
        // 输出第 i 个气球的涂色次数，使用空格分隔
        cout << all[i] << " ";
    }
    
    // 输出换行符并结束程序
    // 小建议：竞赛中更推荐写 cout << '\n'; 代替 endl，因为 endl 会强制刷新缓冲区，稍慢
    cout << endl; 
    return 0;
}