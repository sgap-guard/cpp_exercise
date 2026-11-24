#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ip; cin >> ip;
    int a = stoi(ip.substr(0, 8), nullptr, 2);
    // stoi(str, idx,base)是将字符串str按base进制转换为整数，idx是指向第一个未转换字符的指针
    int b = stoi(ip.substr(8, 8), nullptr, 2);
    int c = stoi(ip.substr(16, 8), nullptr, 2);
    int d = stoi(ip.substr(24, 8), nullptr, 2);
    cout << a << "." << b << "." << c << "." << d << endl;
    return 0;
}