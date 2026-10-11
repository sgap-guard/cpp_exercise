#include <bits/stdc++.h>
using namespace std;
#define int double


signed main()
{
    int Xa, Ya;
    int Xb, Yb;
    cin >> Xa >> Ya;//输入点A的坐标
    cin >> Xb >> Yb;//输入点B的坐标
    cout << fixed << setprecision(3) << 1.0*sqrt( pow(Xa - Xb,2) + pow(Ya - Yb,2)) << endl;
    return 0;
}