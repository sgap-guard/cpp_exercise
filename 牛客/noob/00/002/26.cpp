#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double n = (a+b+c)/3.0;//计算平均成绩
    if(n>=60)
    {
        cout << "NO" << endl;//输出NO
        return 0;
    }
    else
    {
        cout << "YES" << endl;//输出YES
        return 0;
    }
    return 0;
}
