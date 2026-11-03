#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; char c;
    cin >> n >> c;
    int rows = (int)round(n * 0.5); //把 n 的一半四舍五入后，转成整数行数
    // 或者写(n + 1) / 2; 也可以得到相同的结果
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c;
        }

        cout << endl;
    }
    return 0;
}