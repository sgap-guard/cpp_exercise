#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        double x, y; int r;
        cin >> x >> y >> r;
        double dist = sqrt(x * x + y * y);
        double time = dist / 25.0 + 1.5 * r;
        total += time;
    }
    cout << (int)ceil(total) << endl;
    return 0;
}