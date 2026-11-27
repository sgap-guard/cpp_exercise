#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    // 寻找n的真因子
    // 真因子：除了n本身以外的因子
    {
        if (n % i == 0) sum += i;
    }
    if (sum == n) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}