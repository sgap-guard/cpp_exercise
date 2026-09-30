#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a >> b; // 读取当前这一组矩阵的行数a、列数b
        int sz[105][105]; // 定义二维数组sz，大小105*105，存放矩阵元素；题目a,b<=100，空间足够
        // max_val记录当前找到的最大值，初始赋值一个极小负数，保证任何合法数字都能比它大
        long long max_val = -99999999999;
        long long ans_row = 1; // 保存最大值所在行号（题目要求从1开始计数）
        long long ans_col = 1; // 保存最大值所在列号（题目要求从1开始计数）

        // 外层循环：遍历矩阵每一行，i是数组下标，从0开始到a-1，一共a行
        for (int i = 0; i < a; i++)
        {
            // 内层循环：遍历当前行的每一列，j是数组下标，从0开始到b-1，一共b列
            for (int j = 0; j < b; j++)
            {
                cin >> sz[i][j]; // 读取矩阵第i行第j列的数字存入数组
                // 判断：当前读到的数字，是否比已经记录的最大值更大
                if (sz[i][j] > max_val)
                {
                    max_val = sz[i][j];       // 更新最大值为当前这个更大的数
                    ans_row = i + 1;          // 数组下标i从0开始，+1转为题目要求的从1开始的行号
                    ans_col = j + 1;          // 数组下标j从0开始，+1转为题目要求的从1开始的列号
                }
            }
        }
        // 输出答案：最大值的行号、列号，中间空格隔开
        cout << ans_row << " " << ans_col << endl;
    }
    return 0; // 主函数正常结束，返回0
}
