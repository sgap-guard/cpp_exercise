#include <iostream>
using namespace std;

int main() 
{
    int n; cin >> n;
    bool hasAnswer = false;
    for (int x = 1; x * x <= n; x++) 
    {
        for (int y = x; x * x + y * y <= n; y++) 
        {
            if (x * x + y * y == n) 
            {
                cout << x << " " << y << endl;
                hasAnswer = true;
            }
        }
    }
    if (!hasAnswer) 
    {
        cout << "No Solution" << endl;
    }
    return 0;
}