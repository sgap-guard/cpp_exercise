#include<iostream>
using namespace std;
int main()
{
    int i = 1,s(0);//s是偶数的和
    while(i < 100)
    {
        s += i;//将当前奇数i加到s中，得到当前奇数的和
        i += 2;//将i增加2，得到下一个奇数
    }
    cout << "s = " << s << endl;//输出当前奇数的和
    return 0;
}