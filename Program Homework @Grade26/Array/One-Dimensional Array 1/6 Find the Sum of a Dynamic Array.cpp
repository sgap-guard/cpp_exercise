#include <bits/stdc++.h>
using namespace std;

static long long a[1005], S[1005];
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        S[i] = S[i - 1] + a[i];
        // 前缀和的应用，简单理解成求前n项和
    }
    
    for (int i = 1; i < n; i++)
    {
        cout << S[i] << " ";
    }
    cout << S[n] << endl;
    return 0;
}