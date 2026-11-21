#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            int result = n * 3 + 1;
            cout << n << "*3+1=" << result << endl;
            n = result;
        }
        else
        {
            int result = n / 2;
            cout << n << "/2=" << result << endl;
            n = result;
        }
    }
    cout << "End" << endl;
    return 0;
}