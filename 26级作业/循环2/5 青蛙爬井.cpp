#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long H,U,D;
    cin >> H >> U >> D;
    if (H <= U)
    {
        cout << 1 << endl;
        return 0;
    }
    long long a = U - D;
    long long b = H - U;
    long long day = (b + a -1) / a;
    cout << day + 1 << endl;
    return 0;
}