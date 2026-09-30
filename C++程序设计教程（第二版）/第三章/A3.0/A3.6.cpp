#include<iostream>
using namespace std;
int main()
{
    int x,y,z,t;
    cout << "请输入三个整数:" << endl;
    cin >> x >> y >> z;
    if(x > y)
    {
        t = x;x = y;y = t;//交换x和y的值
    }
    if(y < z)
    {
        t = y;y = z;z = t;//交换y和z的值
        if(x > y)
        {
            t = x;x = y;y = t;//交换x和y的值
        }
    }
    cout << x << ">=" << y << ">=" << z << endl;//输出排序后的结果
    return 0;
}