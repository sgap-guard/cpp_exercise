#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double m,h;//m为体重，h为身高
    cin>>m>>h;
    double BMI = m / h / h;//计算BMI
    if(BMI < 18.5)
        cout<<"Underweight"<<endl;
    else if(BMI >= 18.5 && BMI < 24)
        cout<<"Normal"<<endl;
    else
        cout<<setprecision(6)<<BMI<<endl<<"Overweight"<<endl;
        //保留6位有效数字不能用fixed，否则会保留6位小数
    return 0;
}