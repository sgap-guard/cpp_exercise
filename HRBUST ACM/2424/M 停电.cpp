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
        int result = -1;
        for (int N = 1; N <= M; N++)
        {
            int current_last = 0;
            for (int n = 2; n <= M; n++)
            {
                current_last = (current_last + N) % n;
            }
            current_last++;
            if (current_last == K)
            {
                result = N;
                break;
            }
        }
        if (result == -1)
        {
            cout << "No Solution!" << endl;
        }
        else
        {
            cout << result << endl;
        }
    }
    return 0;
}