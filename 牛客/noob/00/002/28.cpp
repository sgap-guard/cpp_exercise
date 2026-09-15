#include<iostream>
using namespace std;
int main()
{
    int y;
    cin >> y;
    int n = y % 100;
    switch(n)
    //这里合理的利用了switch的穿透特性，避免了重复代码
    {
        case 3:
        case 4:
        case 5:
            cout << "spring" << endl;
            break;//break语句用于跳出switch语句，防止穿透执行
        case 6:
        case 7:
        case 8:
            cout << "summer" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "autumn" << endl;
            break;
        case 12:
        case 1:
        case 2:
            cout << "winter" << endl;
            break;
        default:
            cout << "Invalid month" << endl;
    }
    return 0;
}