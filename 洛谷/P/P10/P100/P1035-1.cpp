#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    double sum = 0;
    int n = 0;
    while( sum <= k ) //条件：总和还没有超过k，就继续循环
    {
        n++;
        sum += 1.0 / n;//每次走的距离，取整操作得到每次走的距离
    }
    cout << n;
    return 0;
}
