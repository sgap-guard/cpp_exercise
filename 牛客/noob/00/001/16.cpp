#include <iostream>
using namespace std;
int main()
{
    long long s;
    cin>>s;
    long long H,M,S;//定义三个整数H、M、S，用于存储小时、分钟、秒
    H = s / 3600;//计算小时数
    M = s % 3600 / 60;//计算分钟数
    S = s % 60;//计算秒数
    cout<<H<<" "<<M<<" "<<S<<endl;//输出H、M、S
    return 0;
}