#include<iostream>
using namespace std;
int main()
{
    int i,s(0);//s是奇数的和
    for(i = 1;i <= 100;i += 2)//从1开始，每次增加2，得到1,3,5,7,9,...等奇数
    s += i;//将当前奇数i加到s中，得到当前奇数的和
    cout << "s = " << s << endl;//输出当前奇数的和
    return 0;
}