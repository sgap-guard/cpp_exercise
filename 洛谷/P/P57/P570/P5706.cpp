#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    double t;
    cin >> t >> n;
    cout << fixed << setprecision(3) << t/n << endl;
    //输出结果，fixed表示固定小数点，setprecision(3)表示保留3位小数
    cout <<  n * 2 << endl;
    return 0;
}