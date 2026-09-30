#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a - i - 1; j++)
            {
                cout << ' ';
            }
            for (int j = 0; j < 2 * i + 1; j++)
            {
                cout << '*';
            }
            cout << endl;
        }
        for (int i = 0; i < a - 1; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << ' ';
            }
            for (int j = 0; j < 2 * (a - i - 1) - 1; j++)
            {
                cout << '*';
            }
            cout << endl;
            //必须输出换行，
        }
    }
    return 0;
}