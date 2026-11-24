#include <bits/stdc++.h>
using namespace std;

static int cntM[15];
int main()
{
    int N, M; cin >> N >> M;
    int cntN = 0;
    for (int i = 0; i < N; i++)
    {
        cntM[i] = 0;
        for (int j = 0; j < M; j++)
        {
            int x; cin >> x;
            if (x >= 95)
            {
                cntM[i]++;
            }
        }
        if (cntM[i] >= 2)
        {
            cntN++;
            cout << "student:" << i + 1 << endl;
        }
    }
    if (cntN == 0)
    {
        cout << "None" << endl;
    }
    return 0;
}