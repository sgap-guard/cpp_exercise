#include <bits/stdc++.h>
using namespace std;

static int a[105];
signed main()
{
   int n; cin >> n;
   int val = -1, pos = 0;
   for (int i = 1; i <= n; i++)
   {
        cin >> a[i];
        if (a[i] > val)
        {
            val = a[i];
            pos = i;
        }
   }
   cout << pos << endl;
   return 0;
}