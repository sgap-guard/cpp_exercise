// #include <bits/stdc++.h>
// using namespace std;

// signed main()
// {
//     int k, ans = 0;
//     cin >> k;
//     for (int i = 1; k > 0; i++)
//     {
//         if (k >= i) 
//         {
//             ans += i * i;
//             k -= i;
//         }
//         else
//         {
//             ans += k * i;
//             break;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

signed main()
{
    long long k;
    cin >> k;
    long long n = (long long)((sqrt(8.0 * k + 1) - 1) / 2);
    long long ans = n * (n + 1) * (2 * n + 1) / 6 + (k - n * (n + 1) / 2) * (n + 1);
    cout << ans << endl;
    return 0;
}