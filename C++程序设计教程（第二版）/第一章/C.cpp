#include <bits/stdc++.h>
using namespace std;

signed main()
{
    static int a = 1;
    static long b = 2;
    static long long c = 3;
    static float d = 4.0;
    static double e = 5.0;
    static char f = 'a';
    static bool g = true;
    static string h = "hello";
    static short i = 6;
    cout << sizeof(a) << endl
         << sizeof(b) << endl
         << sizeof(c) << endl
         << sizeof(d) << endl
         << sizeof(e) << endl
         << sizeof(f) << endl
         << sizeof(g) << endl
         << h.size() << endl
         << sizeof(i) << endl;
    return 0;
}
