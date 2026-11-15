#include <iostream>
using namespace std;

int main()
{
    long long sum = 0;
    long long term = 0;
    for (int i = 0; i < 10; ++i)
    {
        term = term * 10 + 9;
        sum += term;
    }
    cout << sum << endl;
    return 0;
}