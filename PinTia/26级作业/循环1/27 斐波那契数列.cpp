#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    long long F[50];
    F[1] = 1, F[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    cout << F[n] << endl;
    return 0;
}