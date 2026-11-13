#include <iostream>
using namespace std;
signed main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j < i)
            {
                cout << "* ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}