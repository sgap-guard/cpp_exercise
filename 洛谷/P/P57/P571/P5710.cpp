#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    //判断是否用bool类型，而不是int类型，因为bool类型只有0和1两种值，而int类型有无限多个值
    bool p1 = (x %2 == 0);//判断是否是偶数
    bool p2 = (x > 4 && x <= 12);//判断是否大于4且不大于12
    int a= p1 && p2;//判断是否是偶数且大于4且不大于12
    int b= p1 || p2;//判断是否是偶数或大于4且不大于12
    int c = p1 != p2;//判断是否是偶数且大于4且不大于12
    int d = !p1 && !p2;//判断是否不是偶数且不大于4或大于12
    cout << a << " " << b << " " << c << " " << d << endl;//输出结果
    return 0;
}