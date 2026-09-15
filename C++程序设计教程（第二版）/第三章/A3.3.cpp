#include<iostream>
using namespace std;
int main()
{
    int x,y,t;
    cout << "输入两个整数x,y:" << endl;
    cin >> x >> y;
    if(x < y)
    {
        t = x;x = y;y = t;//交换x,y的值
    }
    cout << "交换后的x,y为:" << x << ">" << y << endl;//输出交换后的x,y的值
    return 0;
}