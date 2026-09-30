#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        for (int i = 1; i <= a + 1; i++)
        {
            for (int sp = 1; sp <= a - i + 1; sp++)
            {
                cout << ' ';
            }
            for (int num = i; num >= 1; num--)
            {
                cout << num;
            }
            for (int num = 2; num <= i; num++)
            {
                cout << num;
            }
            cout << endl;
        }
        for (int i = a; i >= 1; i--)
        {
            for (int sp = 1; sp <= a - i + 1; sp++)
            {
                cout << ' ';
            }
            for (int num = i; num >= 1; num--)
            {
                cout << num;
            }
            for (int num = 2; num <= i; num++)
            {
                cout << num;
            }
            cout << endl;
        }
    }
    return 0;
}