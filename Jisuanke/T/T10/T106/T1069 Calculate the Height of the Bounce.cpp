#include <iostream>
using namespace std;

int main()
{
    double h; cin >> h;
    double total = h;
    double bounce = h;
    for (int i = 1; i < 10; i++)
    {
        bounce /= 2;
        total += 2 * bounce;
    }
    bounce /= 2;
    cout << total << endl;
    cout << bounce << endl;
    return 0;
}