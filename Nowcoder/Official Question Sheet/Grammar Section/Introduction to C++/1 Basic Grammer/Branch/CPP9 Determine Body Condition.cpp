#include <bits/stdc++.h>
using namespace std;

signed main()
{
    double w, h; cin >> w >> h;
    double bmi = w / h / h;
    if (bmi < 18.5)
    {
        cout << "偏瘦" << endl;
    }
    else if (bmi < 20.9)
    {
        cout << "苗条" << endl;
    }
    else if (bmi < 24.9)
    {
        cout << "适中" << endl;
    }
    else 
    {
        cout << "偏胖" << endl;
    }
    return 0;
}