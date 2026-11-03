#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    double S = 0, T = 0;
    for (int i = 1; i <= n; i++)
    {
        double gpa, sc;
        cin >> gpa >> sc;
        S += sc;
        T += gpa * sc;
    }
    if (S == 0) 
    {
        cout << "0.0" << endl;
    }
    else 
    {
        double ams = T / S;
        cout << fixed << setprecision(1) << ams << endl;
    }
    return 0;
}