#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int x,cnt = 0;
    for (x = 100; x <= 999; x++)
    {
        int ge = x % 10;
        int shi = x / 10 % 10;
        int bai = x / 100;
        if(ge + shi + bai == 5)
        {
            cnt++;
        }
    }
    cout << "Count: " << cnt << endl;
    return 0;
}