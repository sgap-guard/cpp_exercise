#include <bits/stdc++.h>
using namespace std;

int main()
{
    string role, status, action;
    cin >> role >> status >> action;
    if (status == "deleted")
    {
        cout << "deny" << endl;
        return 0;
    }
    if (status == "frozen")
    {
        if (action == "view")
        {
            cout << "permit" << endl;
        }
        else
        {
            cout << "deny" << endl;
        }
        return 0;
    }
    if (status == "active")
    {
        if (role == "admin")
        {
            cout << "permit" << endl;
            return 0;
        }
        if (role == "user" && (action == "view" || action == "edit"))
        {
            cout << "permit" << endl;
            return 0;
        }
        if (role == "guest" && action == "view")
        {
            cout << "permit" << endl;
            return 0;
        }
    }
    cout << "deny" << endl;
    return 0;
}