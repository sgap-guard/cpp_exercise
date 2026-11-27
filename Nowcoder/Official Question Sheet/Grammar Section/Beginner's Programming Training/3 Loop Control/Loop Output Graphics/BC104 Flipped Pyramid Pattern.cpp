#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = n; i >= 1; --i) 
        {
            for (int j = 0; j < n - i; ++j)
                cout << " ";    // 打印空格
            for (int k = 0; k < i; ++k)
                cout << "* ";   // 星号后带空格
            cout << endl;
        }
    }
    return 0;
}