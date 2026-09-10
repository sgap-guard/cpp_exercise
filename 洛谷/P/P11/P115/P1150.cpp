#include <iostream>
using namespace std;
int main()
{
    long long n,k;
    cin >> n >> k;
    long long total= n,butt = n;
    long long new_smoke = n / k;
    while(butt >= k)
    {
        if(butt == 0)
            break;
        new_smoke = butt / k;
        butt = butt % k + new_smoke;
        total += new_smoke;
    }
    cout << total << endl;
    return 0;
}