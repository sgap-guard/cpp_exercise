#include <bits/stdc++.h>
using namespace std;

static long long f[50];
int main()
{
    int k; cin >> k;
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= k; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << f[k] << endl;
    return 0;
}