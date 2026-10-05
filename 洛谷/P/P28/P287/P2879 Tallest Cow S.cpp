#include <bits/stdc++.h>
using namespace std;

static int diff[100005];

signed main()
{
    int N,I,H,R;
    cin >> N >> I >> H >> R;
    diff[0] = 0;
    set<pair<int,int>> seen;

    for (int k = 1; k <= R; k++)
    {
        int A,B;
        cin >> A >> B;
        if (A > B)
        {
            swap(A,B);
        }
        
        if (seen.find({A,B}) != seen.end())
        {
            continue;
        }
        seen.insert({A,B});
        diff[A + 1]--;
        diff[B]++;
    }

    int current = 0;
    for (int i = 1; i <= N; i++)
    {
        current += diff[i];
        int height = H + current;
        if (i == I)
        {
            height = H;
        }
        cout << height << endl;
    }
    return 0;
}