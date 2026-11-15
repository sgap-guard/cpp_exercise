#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x; cin >> x;
    string res;
    if (x % 2 == 0) res += "2 ";
    if (x % 3 == 0) res += "3 ";
    if (x % 7 == 0) res += "7 ";
    if (res.empty()) cout << "n\n";
    else cout << res.substr(0, res.size() - 1) << '\n'; // 去掉末尾多余空格
    return 0;
}