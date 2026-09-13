#include<iostream>
using namespace std;
int main()
{
    int a,b;
    
    while(true)//循环输入数据，while表示当a和b都为0时，结束循环
    {
        cin>>a>>b;
        if (a == 0 && b == 0)//当a和b都为0时，结束循环
        {
            break;
        }
        cout << a + b << endl;//输出a和b的和
    }
    return 0;
}