#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    
    long long total = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x != 6 && x != 7)
        {
            total += 250;
        }
        x++;
        if (x > 7) x = 1;
    }
    
    cout << total << endl;
    return 0;
}