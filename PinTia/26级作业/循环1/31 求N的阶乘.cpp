#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int N; cin >> N;
    long long ans = 1;
    for (int i = 1; i <= N; i++)
    {
        ans *= i;
    }
    cout << "product = " << ans << endl;
    return 0;
}