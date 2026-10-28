#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a; long long b;
    cin >> a >> b;
    if (a == "0")
    {
        cout << "0 0" << endl;
        return 0;
    }
    vector<int> A;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        A.push_back(a[i] - '0');
    }
    vector<int> C;
    long long r = 0;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        r = r * 10 + A[i];
        C.push_back(r / b);
        r = r % b;
    }
    vector<int> res;
    for (int i = C.size() - 1; i >= 0; i--)
    {
        res.push_back(C[i]);
    }
    while (res.size() > 1 && res.back() == 0)
    {
        res.pop_back();
    }
    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i];
    }
    cout << " " << r << endl;
    return 0;
}