#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int S = 0;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        S += fact;
    }
    cout << S << endl;
    return 0;
}