#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    getline(cin, s);
    // 这里不用 cin >> s; 因为cin遇到空格就会结束输入，而getline可以读取整行，包括空格
    int a = s.length();
    // 也可以使用 s.size()，效果一样
    cout << a << endl;
    return 0;
}