#include <bits/stdc++.h>
using namespace std;
#define int long long

bool is_prime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

signed main()
{
    int m, n; cin >> m >> n;
    int cnt = 0;
    for (int i = m; i <= n; i++)
    {
        if (is_prime(i))
        {
            string s = to_string(i);
            reverse(s.begin(), s.end());
            if (is_prime(stoll(s)))
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}