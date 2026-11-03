#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

signed main()
{
    int n, k; cin >> n >> k;
    int cnt = 0, cur = n;
    while (cnt < k)
    {
        if (isPrime(cur))
        {
            string s = to_string(cur);
            reverse(s.begin(), s.end());
            int rev_num = stoi(s);
            if (rev_num != cur && isPrime(rev_num))
            {
                cout << cur << endl;
                cnt++;
            }
        }
        cur++;
    }
    return 0;
}