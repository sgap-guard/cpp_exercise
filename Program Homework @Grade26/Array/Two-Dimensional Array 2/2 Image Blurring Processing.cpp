#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; cin >> n >> m;
    int img[105][105];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> img[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int val;
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
            {
                val = img[i][j];
            }
            else
            {
                int sum = img[i][j] + img[i-1][j] + img[i+1][j] 
                        + img[i][j-1] + img[i][j+1];
                val = (int)round(sum / 5.0);
            }
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}