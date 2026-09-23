#include<iostream>
using namespace std;
int main()
{
    int T; //T表示测试数据的组数
    cin >> T;
    int a[100], b[100];//存储两个整数的数组
    for (int i = 0;i < T;i++)//循环输入T组数据
    {
        cin >> a[i] >> b[i];//输入第i组数据的两个整数
        int sum = a[i] + b[i];//计算第i组数据的两个整数的和
        cout << sum << endl;//输出第i组数据的两个整数的和
    }
    return 0;
}