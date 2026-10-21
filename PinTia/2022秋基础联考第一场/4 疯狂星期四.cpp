#include <bits/stdc++.h>
using namespace std;
#define int long long

static int v[5];

signed main()
{
    int x,y,z,a,b,c,d,k;
    cin >> x >> y >> z;
    cin >> a >> b >> c >> d;
    cin >> k;
    v[1] = a; v[2] =b; v[3] = c; v[4] = d;
    sort(v + 1,v + 5);
    int sum = v[2] + v[3] + v[4];
    int pay = k * sum;
    if (pay >= x)
    {
        cout << "A" << endl;
    }
    else if (pay >= y)
    {
        cout << "B" << endl; 
    }
    else if (pay >= z)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "POOR" << endl;
    }
    return 0;
}