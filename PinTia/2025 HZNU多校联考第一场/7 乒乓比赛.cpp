#include <bits/stdc++.h>
using namespace std;

long long a[505]; 

signed main()
{
    long long MaxVal = 0,
              n,k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        MaxVal = max(MaxVal, a[i]);
    }
    queue<long long> Q;
    for (int i = 1; i <= n; i++)
    {
        Q.push(a[i]);
    }
    long long winner = Q.front();
    Q.pop();
    long long streak = 0;
    while (true)
    {
        long long challenger = Q.front();
        Q.pop();
        if (winner > challenger)
        {
            streak++;
            Q.push(challenger);
        }
        else
        {
            Q.push(winner);
            {
                winner = challenger;
                streak = 1;
            }
        }
        if (winner == MaxVal)
        {
            cout << winner;
            return 0;
        }
        if (streak == k)
        {
            cout << winner;
            return 0;
        }
    }
}