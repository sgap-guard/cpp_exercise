#include<iostream>
using namespace std;
int main()
{
    int i = 1,s(0);//s是偶数的和
    while(i < 100)
    {
        s += i;
        i += 2;
    }
    cout << "s = " << s << endl;//输出当前偶数的和
    return 0;
}