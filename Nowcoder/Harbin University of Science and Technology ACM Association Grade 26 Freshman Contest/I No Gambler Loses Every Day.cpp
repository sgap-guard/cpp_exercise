#include <iostream>
using namespace std;

signed main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n % 3 == 0)
        {
            cout << "旅行者" << endl;
        }
        else
        {
            cout << "班尼特" << endl;
        }
    }
    return 0;
}
