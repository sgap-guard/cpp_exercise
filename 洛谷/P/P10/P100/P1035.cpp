#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    double Sn =0;
    int n = 0;
    while(true)
    {
        n++;
        Sn += 1.0/n;
        if (Sn > k)
        {
            cout << n << endl;
            break;
        }
    }
    return 0;
}