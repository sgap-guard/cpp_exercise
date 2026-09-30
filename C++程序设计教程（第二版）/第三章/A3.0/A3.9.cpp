#include<iostream>
using namespace std;
int main()
{
    int n = 0,mark;//n是成绩的个数，mark是成绩的变量
    double sum = 0;//sum是成绩的总和
    cin >> mark;//输入第一个成绩
    while(mark != -1)//当mark不是-1时，循环继续
    {
        sum += mark;    //将mark加到sum中
        n++;              //将n增加1
        cin >> mark;//输入下一个成绩
    }
    cout << "平均成绩为：" << sum / n << endl;//输出平均成绩
    return 0;
}
