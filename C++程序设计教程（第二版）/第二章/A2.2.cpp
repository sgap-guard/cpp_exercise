#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,l,s;
    cout << "输入斜边、直角边的长：" << endl;
    cin >> c >> a;
    b = sqrt(c*c-a*a);
    l = a+b+c;
    s = a*b/2;
    cout << "计算结果：" << endl;
    cout << "另一直角边=" << b << endl;
    cout << "周长=" << l << endl;
    cout << "面积=" << s << endl;
    return 0;
}