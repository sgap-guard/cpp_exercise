#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int height;
    cin >> height;
    int reach = height + 30;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] <= reach)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}