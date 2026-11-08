#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[100005], b[100005];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for (int i = 1; i <= n; i++)
    {
        int diff = abs(a[i] - b[i]);
        if (diff <= 10)
            cnt1++;
        else if (diff <= 20)
            cnt2++;
        else if (diff <= 30)
            cnt3++;
        else
            cnt4++;
    }
    cout << cnt1 << endl;
    cout << cnt2 << endl;
    cout << cnt3 << endl;
    cout << cnt4 << endl;
    return 0;
}