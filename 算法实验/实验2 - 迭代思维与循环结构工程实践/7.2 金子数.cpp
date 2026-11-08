#include <bits/stdc++.h>
using namespace std;

signed main()
{
    cout << "2604090112 Áõ¼ÑÁÖ" << endl;
    int n, m; cin >> n >> m;
    long long max_gold_sum = -1,
              best_road_id = 0,
              cur_road_sum = 0;
    int val;
    for (int i = 1; i <= n; i++)
    {
        cur_road_sum = 0;
        for (int j = 1; j <= m; j++)
        {
            cin >> val;
            if (val %8 == 0)
            {
                cur_road_sum += val;
            }
        }
        if (cur_road_sum > max_gold_sum)
        {
            max_gold_sum = cur_road_sum;
            best_road_id = i;
        }
    }
    cout << best_road_id << endl;
    return 0;
}