// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a = n / 1000;
//     int b = (n / 100) % 10;
//     int c = (n / 10) % 10;
//     int d = n % 10;
//     cout << d << c << b << a << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s; cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
