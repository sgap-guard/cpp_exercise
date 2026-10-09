#include <iostream>
#define N 6
using namespace std;

signed main()
{
    int g,a[N] = {8,6,9,3,2,7};
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < N-1; i++)
    {
        int imin = i;
        for (int j = i + 1; j < N; j++)
        {
            if (a[j] < a[imin])
            {
                imin = j;
            }
        }
        int t = a[i];
        a[i] = a[imin];
        a[imin] = t;

    }
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}