#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double pi(1),t;//pi是pi的近似值，t是1/n的近似值，n是奇数，s是符号
    int n(1),s(1);//n是奇数，从1开始，每次增加2，得到1,3,5,7,9,...等奇数，s是符号，从1开始，每次取负，得到1,-1,1,-1,...等交替的符号
    do//计算pi的近似值
    {
        n += 2;//n是奇数，从1开始，每次增加2，得到1,3,5,7,9,...等奇数
        t = 1.0 / n;//t是1/n的近似值，n是奇数
        s = -s;//s是符号，从1开始，每次取负，得到1,-1,1,-1,...等交替的符号
        pi = pi + s * t;//pi是pi的近似值，每次增加s*t，得到pi的近似值
    }
    while(t > 0.000000001);//当t大于0.000000001时，循环继续
    {
        cout << "pi = " << setprecision(8) << 4 * pi << endl;
        return 0;
    }
}