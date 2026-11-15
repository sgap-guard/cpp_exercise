#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double sum = 0.0;
    for(int i = 1;i <= n;i++)
    {
        double Hn = 1.0 / i;
        sum += Hn;
    }
    cout << fixed << setprecision(6) << sum << endl;
    return 0;
}
