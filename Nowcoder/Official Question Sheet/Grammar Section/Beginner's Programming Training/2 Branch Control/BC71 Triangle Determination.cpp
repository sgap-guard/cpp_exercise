#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int a, b, c; cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c) 
            cout << "Equilateral triangle!" << endl;
        else if (a == b || a == c || b == c) 
            cout << "Isosceles triangle!" << endl;
        else 
            cout << "Ordinary triangle!" << endl;
    }
    else 
        cout << "Not a triangle!" << endl;
    return 0;
}