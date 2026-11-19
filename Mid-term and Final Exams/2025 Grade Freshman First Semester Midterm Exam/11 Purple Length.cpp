#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    cout << max(0LL, min(r1, r2) - max(l1, l2)) << endl;
    return 0;
}