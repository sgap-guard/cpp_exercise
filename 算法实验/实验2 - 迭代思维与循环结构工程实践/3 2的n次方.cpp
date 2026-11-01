#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long x;
    while (cin >> x)
    {
        if (x < 0) x = -x;
        if (((x & (x - 1)) == 0) && x > 0)
        {
            long long n = __builtin_ctz(x);
            cout << n << endl;
        }
        else
        {
            cout << "No!" << endl;
        }
    }
    return 0;
}
//__builtin_ctz(x) 是 GCC/G++ 编译器内置的一个极其高效的位运算函数。
//它的的全称是 Count Trailing Zeros（统计末尾零的个数）。

// 计算一个正整数 x 的二进制表示中，从最低位（最右边）开始，连续有多少个 0。