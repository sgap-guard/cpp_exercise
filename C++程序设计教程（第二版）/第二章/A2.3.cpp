#include<iostream>
using namespace std;
int main()
{
    float x,y,z,max;
    cout << "请输入三个数据：" << endl;
    cin >> x >> y >> z;
    max = x > y ? x :y;
    //这里用到了三目运算符，先计算x和y中的较大值，再与z进行比较，得出最大值
    max = max > z ? max : z;
    cout << "最大的数据是：" << max << endl;
    return 0;
}