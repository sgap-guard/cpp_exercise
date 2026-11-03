#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int N, M; cin >> N >> M;
    double P[105];
    for (int i = 1; i <= N; i++)
    {
        cin >> P[i];
        if (P[i] < M)
        {
            cout << "On Sale! " << fixed << setprecision(1) << P[i] << endl;
        }
    }
    return 0;
}