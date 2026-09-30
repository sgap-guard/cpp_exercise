#include <bits/stdc++.h>
using namespace std;

int pi[200005];

int main()
{
    int t;
    cin >> t;
    for (int caseNum = 1; caseNum <= t; caseNum++)
    {
        string A,B;
        cin >> A >> B;
        int m = A.size();
        int n = B.size();

        pi[0] = 0;
        int j = 0;

        for (int i = 1; i < m; i++)
        {
            while (j > 0 && A[i] != A[j])
            {
                j = pi[j-1];
            }
            if (A[i] == A[j])
            {
                j++;
            }
            pi[i] = j;
        }
        int cnt = 0;
        j = 0;
        for (int i = 0; i < n; i++)
        {
            while (j > 0 && B[i] != A[j])
            {
                j = pi[j-1];
            }
            if (B[i] == A[j])
            {
                j++;
            }
            if (j == m)
            {
                cnt++;
                j = pi[j-1];
            }
        }
        cout << "Case #" << caseNum << ": " << cnt << endl;
    }
    return 0;
}