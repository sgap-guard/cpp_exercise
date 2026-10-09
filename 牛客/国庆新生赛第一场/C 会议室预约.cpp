#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long N; cin >> N;
    vector<pair<int,int>> a(N);
    for (auto &x : a)
    {
        cin >> x.second >> x.first;
    }
    sort(a.begin(),a.end());
    int A = 0,B = 0;
    for (auto &x : a)
    {
        if (x.second >= B)
        {
            A++;
            B = x.first;
        }
    }
    cout << A;
    return 0;
} 