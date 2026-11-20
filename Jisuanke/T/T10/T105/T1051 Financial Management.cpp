#include <bits/stdc++.h>
using namespace std;

signed main()
{
    double sum = 0;
    for (int i = 1; i <= 12; i++)
    {
        double a; cin >> a;
        sum += a;
    }
    double avg = sum / 12;
    cout << "$" << fixed << setprecision(2) << avg << endl;
    return 0;
}