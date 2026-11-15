#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int juli; cin >> juli;
    double walk = juli / 1;
    double car = 10 + juli / 10;
    cout << (walk < car ? "w" : "v") << endl;
    return 0;
}