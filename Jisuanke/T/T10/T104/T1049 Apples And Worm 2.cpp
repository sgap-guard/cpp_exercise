#include <iostream>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    int eat = (y + x - 1) / x;      // 吃完的个数，向上取整
    if (eat > n) eat = n;

    cout << n - eat << endl;
    return 0;
}