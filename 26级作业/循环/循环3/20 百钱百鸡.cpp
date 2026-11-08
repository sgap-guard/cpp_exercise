#include <iostream>
using namespace std;

int main() 
{
    int n; cin >> n;
    bool hasAnswer = false;
    for (int x = 0; x <= n / 5; x++) 
    {
        for (int y = 0; y <= n / 3; y++) 
        {
            int z = n - x - y;
            if (z >= 0 && z % 3 == 0) 
            {
                if (15 * x + 9 * y + z == 3 * n) 
                {
                    cout << x << " " << y << " " << z << endl;
                    hasAnswer = true;
                }
            }
        }
    }
    if (!hasAnswer) 
    {
        cout << "No Answer." << endl;
    }
    return 0;
}