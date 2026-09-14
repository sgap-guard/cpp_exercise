#include<iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i) 
    {//for循环遍历n个学生
        int p, v, t;//p、v、t分别表示学生i的三科的分数
        cin >> p >> v >> t;
        if (p + v + t >= 2) 
        {//如果学生i的三科的分数之和大于等于2
            count++;//count++表示将count的值增加1
        }
    }
    cout << count << endl;//输出通过的学生人数
    return 0;
}
//总结
//这道题的思路是遍历n个学生，判断每个学生的三科分数之和是否大于等于2，如果是，则count++，最后输出count的值。
//这道题的难点在于如何判断每个学生的三科分数之和是否大于等于2，这里使用了if语句来判断。
//这道题的考点是循环和条件判断语句的使用。
//这道题的解题步骤是：1.输入n个学生的三科分数；2.遍历n个学生，判断每个学生的三科分数之和是否大于等于2，如果是，则count++；3.输出count的值。