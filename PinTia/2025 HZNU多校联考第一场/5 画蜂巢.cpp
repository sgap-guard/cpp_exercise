#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    cout << R"(   +---+
  /     \
 +       +
  \     /
   +---+)" << endl;
    if (n == 1)
    {
        return 0;
    }
    else
    {
        for (int j = n-1; j >= 1; j--)
        {
            cout << R"(  /     \
 +       +
  \     /
   +---+)" << endl;
        }
    }
    return 0;
}