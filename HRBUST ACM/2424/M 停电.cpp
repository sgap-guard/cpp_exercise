#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int M,K;
        cin >> M >> K;
        int ans = -1;
        for (int N = 1; N <= M; N++)
        {
            int last = 0;
            for (int n = 2; n <= M; n++)
            {
                last = (last + N) % n;
            }
            last++;
            if (last == K)
            {
                ans = N;
                break;
            }
        }
        if (ans == -1)
        {
            cout << "No Solution!" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}