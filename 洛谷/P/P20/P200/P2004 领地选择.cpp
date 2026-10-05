#include <bits/stdc++.h>
using namespace std;

static long long S[1005][1005],A[1005][1005];

signed main()
{
    int n,m,c; cin >> n >> m >> c;
    S[0][0] = 0;
    for(int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> A[i][j];
            S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + A[i][j];
        }
    }

    long long MaxSum = -1e18;
    int BestX(1),BestY(1);
    for(int i = 1; i <= n - c + 1; i++)
    {
        for(int j = 1; j <= m - c + 1; j++)
        {
            int x2 = i + c - 1;
            int y2 = j + c - 1;
            long long sum = S[x2][y2] - S[i - 1][y2] - S[x2][j - 1] + S[i - 1][j - 1];
            if(sum > MaxSum)
            {
                MaxSum = sum;
                BestX = i;
                BestY = j;
            }
        }
    }
    cout << BestX << " " << BestY <<endl;
    return 0;
}