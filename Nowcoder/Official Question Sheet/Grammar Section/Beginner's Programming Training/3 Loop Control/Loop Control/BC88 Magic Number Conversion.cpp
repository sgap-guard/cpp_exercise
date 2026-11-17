#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    
    while (n >= 1 && n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            cnt++;
        }
        else
        {
            n = 3 * n + 1;
            cnt++;
        }
    }
    
    cout << cnt << endl;
    return 0;
}