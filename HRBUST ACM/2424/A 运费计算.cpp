#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p,w,s;
        cin >> p >> w >> s;
        double d;
        
        if (s < 250)
        {
            d = 0.0;
        }
        else if (s < 500)
        {
            d = 0.02;
        }
        else if (s < 1000)
        {
            d = 0.05;
        }
        else if (s < 2000)
        {
            d = 0.08;
        }
        else if (s < 3000)
        {
            d = 0.1;
        }
        else
        {
            d = 0.15;
        }

        double result = 1.0 * p * w * s * (1 - d);

        cout << fixed << setprecision(3) << result << endl;
    }
    return 0;
}