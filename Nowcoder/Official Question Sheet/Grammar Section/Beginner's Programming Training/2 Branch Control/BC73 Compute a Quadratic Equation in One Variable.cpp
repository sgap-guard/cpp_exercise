#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    while (cin >> a >> b >> c)
    {
        if (fabs(a) < 1e-6)
        {
            cout << "Not quadratic equation" << endl;
            continue;
        }
        double delta = b * b - 4 * a * c;
        double real = -b / (2 * a);
        if (fabs(real) < 1e-6) real = 0.0;
        cout << fixed << setprecision(2);
        if (fabs(delta) < 1e-6)
        {
            cout << "x1=x2=" << real << endl;
        }
        else if (delta > 1e-6)
        {
            double x1 = (-b - sqrt(delta)) / (2 * a);
            double x2 = (-b + sqrt(delta)) / (2 * a);
            if (x1 > x2) swap(x1, x2);
            cout << "x1=" << x1 << ";x2=" << x2 << endl;
        }
        else
        {
            double imag = sqrt(-delta) / (2 * a);
            double r1 = -imag;
            double r2 = imag;
            if (r1 > r2) swap(r1, r2);
            cout << "x1=" << real << r1 << "i"
                 << ";x2=" << real << "+" << r2 << "i" << endl;
        }
    }
    return 0;
}