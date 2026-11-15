#include <bits/stdc++.h>
using namespace std;

signed main()
{
    double w, h; cin >> w >> h;
    double BMI = w / h / h;
    if (BMI >= 18.5 && BMI <= 23.9)
    {
        cout << "Normal" << endl;
    }
    else
    {
        cout << "Abnormal" << endl;
    }
    return 0;
}