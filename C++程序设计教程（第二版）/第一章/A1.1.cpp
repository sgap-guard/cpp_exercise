#include <iostream>
using namespace std;
#define PI 3.14//圆周率的值为3.14
//#define也可以写在#include前面，但是建议写在#include后面
int main()
{
    double r;
    cin >> r;
    double S = PI * r * r;
    cout << S << endl;
    return 0;
}
