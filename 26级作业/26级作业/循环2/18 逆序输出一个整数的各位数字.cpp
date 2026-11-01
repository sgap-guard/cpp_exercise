#include <iostream>
using namespace std;

int main()
{
    long long n; cin >> n;
    if (n == 0) 
    {
        cout << "0 ";
    } 
    else 
    {
        while (n > 0) 
        {
            int digit = n % 10;
            cout << digit << " ";
            n = n / 10;
        }
    }
    return 0;
}