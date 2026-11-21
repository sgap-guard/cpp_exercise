#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N; cin >> N;
    long long deep = 0, shallow = 0, rapid = 0, total = 0;
    for (int i = 0; i < N; ++i)
    {
        int type, duration; cin >> type >> duration;
        if (type == 2) deep += duration;
        else if (type == 1) shallow += duration;
        else if (type == 0) rapid += duration;
    }
    total = deep + shallow + rapid;
    bool deep_ok = false, shallow_ok = false, rapid_ok = false;
    if (total > 0)
    {
        if (2 * total <= 10 * deep && 10 * deep <= 6 * total)
        {
            deep_ok = true;
        }
        if (20 * shallow < 11 * total)
        {
            shallow_ok = true;
        }
        if (total <= 10 * rapid && 10 * rapid <= 3 * total)
        {
            rapid_ok = true;
        }
    }
    else
    {
        deep_ok = shallow_ok = rapid_ok = false;
    }
    string result;
    if (!deep_ok)
    {
        result = "Bad!";
    }
    else
    {
        int not_ok_count = (!shallow_ok) + (!rapid_ok);
        if (not_ok_count == 0)
        {
            result = "Great!";
        }
        else if (not_ok_count == 1)
        {
            result = "Normal";
        }
        else
        {
            result = "Little Bad";
        }
    }
    cout << result << " " << total << endl;
}

signed main()
{
    cout << "Áõ¼ÑÁÖ 2604090112" << endl;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}