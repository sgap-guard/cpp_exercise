#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        long long Sum = 0,SumSqare = 0,MaxVal = LLONG_MIN,MinVal = LLONG_MAX;

        for (int i =0; i < n; i++)
        {
            long long x; cin >> x;
            Sum += x;
            SumSqare += x * x;
            if (x > MaxVal)
            {
                MaxVal = x;
            }
            if (x < MinVal)
            {
                MinVal = x;
            }
        }
        long long Range = MaxVal - MinVal;
        double Mean = 1.0 * Sum / n;
        double Variance = 1.0 * (SumSqare) / n - Mean * Mean;

        cout << fixed << setprecision(3) << Range << " " << Variance << endl;
    }
    return 0;
}
