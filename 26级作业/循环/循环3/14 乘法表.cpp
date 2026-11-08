#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " * " << j << " = " << setw(2) << i * j;

            if (j != i)
            {
                cout << "    ";
            }
        }
        cout << endl;
    }
    return 0;
}