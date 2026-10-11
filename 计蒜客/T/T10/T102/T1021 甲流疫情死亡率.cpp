#include <bits/stdc++.h>
using namespace std;

int main()
{
    static double patient;
    static double deaths;

    if (cin >> patient >> deaths)
    {
        static double death_rate = (deaths / patient) * 100.0;
        cout << fixed << setprecision(3) << death_rate << "%" << endl;
    }
    return 0;
}