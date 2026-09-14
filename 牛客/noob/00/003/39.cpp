#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int f[20];
    f[1] = 0;
    f[2] = 1,f[3] = 1;
    for(int i = 4;i <= n;i++)
    {
        f[i] = f[i-3] + 2 * f[i-2] + f[i-1];
    }
    cout << f[n] << endl;
    return 0;
}