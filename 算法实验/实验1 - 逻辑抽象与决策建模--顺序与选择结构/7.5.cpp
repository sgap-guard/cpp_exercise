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
    string q = ""; long long r = 0;
    for (int i = 0; i < a.length(); i++)
    {
        r = r * 10 + (a[i] - '0');
        q += to_string(r / b);
        r = r % b;
    }
    while (q.length() > 1 && q[0] == '0')
    {
        q.erase(0, 1);
    }
    cout << q << " " << r << endl;
    return 0;
}