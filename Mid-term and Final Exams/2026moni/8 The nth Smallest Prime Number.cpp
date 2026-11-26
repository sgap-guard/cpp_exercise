#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

static int a[100005];
signed main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 2; i <= 110000; i++)
    {
        if (is_prime(i))
        {
            cnt++;
            a[cnt] = i;
        }
    }
    cout << a[n] << endl;
    return 0;
}