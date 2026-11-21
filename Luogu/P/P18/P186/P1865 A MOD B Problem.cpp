#include <bits/stdc++.h>
using namespace std;
#define int long long
const int Maxm = 1000000 + 10;
bool isPrime[Maxm];
int sum[Maxm];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n, m; cin >> n >> m;
    if (m >= Maxm) m = Maxm - 1;
    for (int i = 0; i <= m; i++)
    {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= m; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= m; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    sum[0] = 0;
    for (int i = 0; i <= m; i++)
    {
        sum[i] = sum[i - 1] + (isPrime[i] ? 1 : 0);
    }
    for (int i = 1; i <= n; i++)
    {
        int a, b; cin >> a >> b;
        if (a < 1 || b > m || a > b)
        {
            cout << "Crossing the line" << endl;
        }
        else
        {
            cout << sum[b] - sum[a - 1] << endl;
        }
    }
    return 0;
}