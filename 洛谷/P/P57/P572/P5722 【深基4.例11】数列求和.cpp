#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;//1+2+3+...+n
    for(int i = 1;i <= n;i++)//从1到n
    {
        sum += i;//将i加到sum中
    }
    cout << sum << endl;//输出sum
    return 0;
}