#include<iostream>
using namespace std;
int main()
{
    long a,b,c;
    cin>>a>>b>>c;
    long long S,V;//定义两个整数S、V，用于存储表面积、体积
    S = 2*(a*b + b*c + a*c);//计算表面积
    V = a*b*c;//计算体积
    cout<<S<<endl<<V<<endl;//输出S、V
}