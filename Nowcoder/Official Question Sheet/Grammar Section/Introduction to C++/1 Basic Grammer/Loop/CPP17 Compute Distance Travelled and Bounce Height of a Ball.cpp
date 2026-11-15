#include <bits/stdc++.h>
using namespace std;

int main()
{
    double h; int n;
    cin >> h >> n;
    double total_dist = 0.0;
    double curr_h = h;
    double rebound_h = 0.0;
    for (int i = 1; i <= n; ++i)
    {
        total_dist += curr_h;
        rebound_h = curr_h / 2.0;
        if (i < n)
        {
            total_dist += rebound_h;
        }
        curr_h = rebound_h;
    }
    cout << fixed << setprecision(1) << total_dist << " " << rebound_h << endl;
    return 0;
}