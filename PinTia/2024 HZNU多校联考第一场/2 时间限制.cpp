#include <iostream>
using namespace std;

int main()
{
    int T1, T2;
    cin >> T1 >> T2;
    if (T2 > 2 * T1)
    {
        cout << "RE" << endl;
    }
    else
    {
        cout << "AC" << endl;
    }
    return 0;
}