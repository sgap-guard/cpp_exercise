#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Node 
{
    ll value;
    string str;
};
bool cmp(const Node& a, const Node& b)
{
    return a.value < b.value;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    while (T--) 
    {
        int n;
        cin >> n;
        vector<Node> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i].str;
            a[i].value = 0;
            for (char c : a[i].str) 
            {
                a[i].value += c - 'a' + 1;
            }
        }
        sort(a.begin(), a.end(), cmp);
        bool flag = false;
        for (int i = 0; i < n - 1; i++) 
        {
            if (a[i].value == a[i + 1].value && a[i].str != a[i + 1].str) 
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}