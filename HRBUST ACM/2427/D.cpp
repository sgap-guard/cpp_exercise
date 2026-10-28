#include <bits/stdc++.h>
const int MOD = 998244353;
using namespace std;

static long long A[100005];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T; cin >> T;
    for (int k = 1; k <= T; k++)
    {
        long long n; cin >> n;
        A[1] = n, A[2] = n / 2;
        for (int i = 3; i <= n; i++)
        {
            A[i] = ((A[i - 1] ^ A[i - 2]) + (A[i - 1] * A[i - 2])) % MOD;
        }
        cout << A[n] << endl;
    }
    return 0;
}   
