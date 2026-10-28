#include <iostream>
using namespace std;

signed main()
{
    int n, cnt = 0; cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int x = i % 10;
        if (x == 3) cnt++;
    }
    cout << cnt << endl;
    return 0;
}