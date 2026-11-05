#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0) return false;
    }
    return true;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n, cnt = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
        {
            cnt++;
            if (cnt % 5 != 1) 
            {
                cout << " "; 
            }
            cout << i;
            if (cnt % 5 == 0)
            {
                cout << "\n";
            }
        }
    }
    return 0;
}