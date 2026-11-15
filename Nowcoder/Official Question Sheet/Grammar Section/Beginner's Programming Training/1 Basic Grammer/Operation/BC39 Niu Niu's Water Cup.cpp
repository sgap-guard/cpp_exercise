#include <bits/stdc++.h>
using namespace std;

int main()
{
    const double PI = 3.14;
    double h, r;
    cin >> h >> r;
    double V = PI * h * r * r;
    double need = 10000.0 / V;
    int ans = (int)ceil(need);
    cout << ans << endl;
    return 0;
}