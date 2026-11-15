#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s; cin >> s;
    string year = s.substr(0, 4);
    string month = s.substr(4, 2);
    string date = s.substr(6, 2);
    cout << "year=" << year << endl;
    cout << "month=" << month << endl;
    cout << "date=" << date << endl;
    return 0;
}