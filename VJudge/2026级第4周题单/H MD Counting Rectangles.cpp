#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int MAX_VAL =1001;
    int SumArea[MAX_VAL][MAX_VAL];
    int t; cin >> t;
    for (int i = 1; i <= t; i++)
    {
        SumArea[0][0] = 0;
        int n,q; cin >> n >> q;
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                int hi,wi; cin >> hi >> wi;
                int area = hi * wi;
                SumArea[hi][wi] = area + SumArea[hi][wi];
            }
        }

        for (int h = 1; h <= 1000; h++)
        {
            for (int w = 1; w <= 1000; w++)
            {
                SumArea[h][w] += SumArea[h - 1][w] + SumArea[h][w - 1] - SumArea[h - 1][w - 1];
            }
        }

        for (int query = 1; query <= q; query++)
        {
            int hs,ws,hb,wb; cin >> hs >> ws >> hb >> wb;
            int y2 = hb - 1,x2 = wb - 1,y1 = hs,x1 = ws;
            if (y2 < 0 || x2 < 0 || y1 > y2 || x1 > x2)
            {
                cout << 0 << endl;
            }
            else
            {
                int ans = SumArea[y2][x2] - SumArea[y1 - 1][x2] - SumArea[y2][x1 - 1] + SumArea[y1 - 1][x1 - 1];
                cout << ans << endl;
            }
        }
    }
    return 0;
}