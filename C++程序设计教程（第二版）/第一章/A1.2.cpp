#include<iostream>
using namespace std;
int add(int a,int b)
//定义一个函数add，用于计算两个整数的和
{
    int z;
    z = a+b;
    return z;//返回计算结果
}
int main()
{
    int a,b,c;
    cin >> a >> b;
    c = add(a,b);
    cout << c << endl;
    return 0;
}