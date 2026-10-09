#include <bits/stdc++.h>
using namespace std;

signed main()
{
    double pi_4 = 0,team,sign = 1;
    int deno = 1;
    do
    {
        team = sign * 1.0 / deno;
        pi_4 += team;
        sign *= -1;
        deno += 2;
    }
    while (fabs(team) >= 1e-4);
    {
        double pi = 4 * pi_4;
        cout << "pi = " << pi << endl;
    }
    return 0;
}