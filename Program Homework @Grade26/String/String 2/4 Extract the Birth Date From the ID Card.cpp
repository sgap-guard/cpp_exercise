#include <bits/stdc++.h>
using namespace std;

int main()
{
    string id;
    while (cin >> id)
    {
        if (id.size() != 18)
        {
            cout << "Invalid data,input again!" << endl;
        }
        else
        {
            string year = id.substr(6, 4);
            string month = id.substr(10, 2);
            cout << year << "," << month << endl;
        }
    }
    return 0;
}
