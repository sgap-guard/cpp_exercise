#include <iostream>
using namespace std;

int main()
{
    long long a, m;
    cin >> a >> m;
    if (a < 0 || a > 100 || m < 0 || m > 100000) 
    {
        cout << "No answer!" << endl;
        return 0;
    }
    if (a >= m) 
    {
        cout << "sum=" << a << ",count=0" << endl;
        return 0;
    }
    long long sum = 0;
    long long count = 0;
    long long current = a;
    while (sum <= m)
    {
        sum += current;
        current++;
        count++;
    }
    cout << "sum=" << sum << ",count=" << current - 1 << endl;
    return 0;
}