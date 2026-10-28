#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int S[105];
    int n, sum = 0; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> S[i];
        sum += S[i];
    }
    sort(S + 1, S + n + 1);
    double arr = (double)sum / n;
    cout << S[n] << endl
         << S[1] << endl
         << fixed << setprecision(2) << arr << endl;
    return 0;
}