#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int mhd = abs(x2 - x1) + abs(y2 - y1);
    int qbxf = max(abs(x1 - x2),abs(y1 - y2));
    cout << mhd << " " << qbxf << endl;
    return 0;
}