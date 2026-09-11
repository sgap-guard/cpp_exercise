#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin >> a >> b;
    int total = a * 10 + b;//将两个整数合并为一个整数
    cout << total / 19 << endl;//输出总和除以19的商，取整操作得到总和除以19的商
    return 0;   
}