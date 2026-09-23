#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = n / 1000;//千位
    int b = (n / 100) % 10;//百位
    int c = (n / 10) % 10;//十位
    int d = n % 10;//个位
    cout << d << c << b << a << endl;//输出个位十位百位千位
    return 0;
}
