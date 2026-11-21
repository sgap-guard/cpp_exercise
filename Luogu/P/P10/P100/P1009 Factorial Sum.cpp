#include <bits/stdc++.h>
using namespace std;

const int M = 10000;
int f[50], s[50];
signed main()
{
    int n; cin >> n;
    f[0] = s[0] = 1;
    for (int i = 2; i <= n; i++)
    {
        int c = 0;
        for (int j = 0; j < 45; j++)
        {
            int t = f[j] * i + c;
            f[j] = t % M;
            c = t / M;
        }
        c = 0;
        for (int j = 0; j < 45; j++)
        {
            int t = s[j] + f[j] + c;
            s[j] = t % M;
            c = t / M;
        }
    }
    int k = 44;
    while (k > 0 && s[k] == 0) k--;
    cout << s[k];
    for (int i = k - 1; i >= 0; i--) 
    {
        cout << setw(4) << setfill('0') << s[i];
    }
    cout << endl;
    return 0;
}