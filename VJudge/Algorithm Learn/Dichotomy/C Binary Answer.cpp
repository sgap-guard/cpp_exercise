#include <bits/stdc++.h>
using namespace std;

int L, N, M;
int a[50005];

bool check(int x) {
    int cnt = 0, last = 0;
    for (int i = 1; i <= N; i++) {
        if (a[i] - last < x) {
            cnt++;
            if (cnt > M) return false;
        } else {
            last = a[i];
        }
    }
    return L - last >= x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> L >> N >> M;
    for (int i = 1; i <= N; i++) cin >> a[i];
    
    int l = 0, r = L, ans = 0;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}