#include <bits/stdc++.h>
using namespace std;

static int score[205];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q; cin >> n >> q;

    for (int k = 0; k < q; k++)
    {
        int a, b, sa, sb;
        cin >> a >> b >> sa >> sb;
        if (sa > sb)               // a 胜
        {
            score[a] += 3;
            score[b] = score[b] >= 2 ? score[b] - 2 : 0;
        }
        else if (sa < sb)          // b 胜
        {
            score[b] += 3;
            score[a] = score[a] >= 2 ? score[a] - 2 : 0;
        }
        // 平局：双方得 0 分，不加不扣
    }
    int best = 1;
    for (int i = 1; i <= n; i++)
    {
        if (score[i] > score[best])
        {
            best = i;
        }
    }
    cout << best << endl;
    return 0;
}