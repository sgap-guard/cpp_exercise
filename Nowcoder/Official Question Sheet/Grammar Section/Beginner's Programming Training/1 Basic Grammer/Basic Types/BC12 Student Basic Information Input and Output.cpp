#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i; double a, b, c;
    char sep1, sep2, sep3; // 用来吃掉 ';' 和 ','
    cin >> i >> sep1 >> a >> sep2 >> b >> sep3 >> c;
    a = round(a * 100) / 100.0;
    b = round(b * 100) / 100.0;
    c = round(c * 100) / 100.0;
    cout << fixed << setprecision(2);
    cout << "The each subject score of No. " << i 
         << " is " << a << ", " << b << ", " << c << "." << endl;
    return 0;
}