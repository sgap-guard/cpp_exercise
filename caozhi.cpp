#include <bits/stdc++.h>
using namespace std;

signed main()
{
    // 1. 默认构造：全部填0
    bitset<8> bs1;
    cout << "bs1: " << bs1 << "\n"; // 00000000

    // 2. 用整数初始化（取低位，高位截断）
    bitset<8> bs2(6);   // 6 = 110
    cout << "bs2: " << bs2 << "\n"; // 00000110

    // 3. 用01字符串初始化
    bitset<8> bs3(string("1010"));
    cout << "bs3: " << bs3 << "\n"; // 00001010

    return 0;
}
