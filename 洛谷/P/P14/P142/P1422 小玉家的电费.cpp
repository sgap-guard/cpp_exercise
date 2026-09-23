#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x;
    cin >> x;
    double total;
    if(x <= 150)
        total = 0.4463 * x;
    else if (x > 150 && x <= 400)
        total = (x - 150) * 0.4663 + 150 * 0.4463;
    else if (x > 400)
        total = (x - 400) * 0.5663 + 150 * 0.4463 + 250 * 0.4663;
    cout << fixed << setprecision(1) << total << endl;
    return 0;
}