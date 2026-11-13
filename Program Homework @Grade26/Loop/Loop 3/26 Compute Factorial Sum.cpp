#include <iostream>
using namespace std;

int main() 
{
    int n; cin >> n;
    int sum = 0, term = 1;
    for (int i = 1; i <= n; i++) 
    {
        term *= i;
        sum += term;
    }
    cout << sum << endl;
    return 0;
}