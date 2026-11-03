#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int score, max_s, min_s;
    bool first = true;
    while (cin >> score)
    {
        if (score < 0)
        {
            break;
        }
        if (first)
        {
            max_s = min_s = score;
            first = false;
        }
        else
        {
            max_s = max(max_s, score);
            min_s = min(min_s, score);
        }
    }
    cout << "max=" << max_s << ",";
    cout << "min=" << min_s << endl;
    return 0;
}