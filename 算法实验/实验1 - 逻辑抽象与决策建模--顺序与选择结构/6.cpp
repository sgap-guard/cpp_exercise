#include <bits/stdc++.h>
using namespace std;
signed main()
{
    long long m, n; cin >> m >> n;
    long long sum1 = 0, sum2 = 0;
    if (m > n)
    {
        cout << "两个数不符合要求，必须m<=n，请重新输入！" << endl;
        return 0;
    }
    for (long long i = m; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum2 += i;
        }
        else
        {
            sum1 += i;
        }
    }
    cout << m << "-" << n << "奇数和：" << sum1 << "." << endl;
    cout << m << "-" << n << "偶数和：" << sum2 << "." << endl;
    return 0;
}