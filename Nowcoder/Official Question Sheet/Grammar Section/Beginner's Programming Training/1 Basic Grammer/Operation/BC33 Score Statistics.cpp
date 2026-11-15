#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n; cin >> n;
    double a[105];
    double sum = 0;
    for (int i = 0; i < n; ++i) { cin >> a[i]; sum += a[i]; }
    sort(a, a + n);
    double avg = sum / n;
    double maxVal = a[n - 1], minVal = a[0];
    cout << fixed << setprecision(2) << maxVal << " " << minVal << " " << avg << endl;
    return 0;
}