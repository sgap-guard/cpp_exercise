#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double eps = 1e-5;
    double x0, x1 = 1.0;
    double fx, f1x;

    do
    {
        x0 = x1;
        fx  = 3 * x0 * x0 * x0 - 4 * x0 * x0 - 5 * x0 + 13;
        f1x = 9 * x0 * x0 - 8 * x0 - 5;
        x1  = x0 - fx / f1x;
    }
    while (fabs(x1 - x0) > eps);
    
    cout << "The root is " << x1 << endl;
    return 0;
}