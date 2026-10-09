#include <bits/stdc++.h>    // 万能头文件，包含所有标准库（如iostream）
using namespace std;        // 引入标准命名空间，避免写std::

signed main()               // 主函数，返回有符号整数（比int main()更灵活）
{
    int n; cin >> n;        // 读入学生人数n（虽然循环固定到1000，但这里读入n）

    int m1 = -1, m2 = -1;   // 初始化：m1存最高分，m2存第二高分，初始设为-1（假设成绩非负）

    for (int i = 2; i <= 1000; i++)  // 循环读入成绩，从i=2开始到1000
        // 注意：题目可能有n=1的特殊情况，循环从2开始是因为第1个成绩特殊处理或题目设定
    {
        int score; cin >> score;     // 读入当前学生的成绩

        if (score > m1)              // 如果当前成绩比第一名还高
        {
            m2 = m1;                 // 原来的第一名降为第二名
            m1 = score;              // 当前成绩成为新的第一名
        }
        else if (score > m2 && score < m1)  // 如果当前成绩介于第一名和第二名之间
        {
            m2 = score;              // 更新第二名
        }
    }

    cout << m2 << endl;     // 输出第二名的成绩
    return 0;               // 程序正常结束
}