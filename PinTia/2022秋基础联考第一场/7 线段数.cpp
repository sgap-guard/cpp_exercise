#include <bits/stdc++.h>
using namespace std;

int main()
{
    double eps; cin >> eps;
    double sum = 0.0;
    double ai = 1.0 / (1 * (2 * 1 - 1)); 
    for (int i = 1; i <= 100000; i++)
    {
        double ai_next = 1.0 / ((i + 1) * (2 * (i + 1) - 1));
        sum += ai;
        if (ai > eps && ai_next <= eps)
        {
            sum += ai_next;
            cout << fixed << setprecision(6) << sum << endl;
            break;
        }
        ai = ai_next;
    }
    return 0;
}