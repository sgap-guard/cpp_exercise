// #include <bits/stdc++.h>
// using namespace std;

// signed main()
// {
//     int year, month;
//     cin >> year >> month;
//     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//     {
//         if (month == 2)
//             cout << 29 << endl;
//         else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//             cout << 31 << endl;
//         else
//             cout << 30 << endl;
//     }
//     else
//     {
//         if (month == 2)
//             cout << 28 << endl;
//         else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//             cout << 31 << endl;
//         else
//             cout << 30 << endl;
//     }
//     return 0;
// }

// switch
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int y, m; cin >> y >> m;
    int days;
    switch (m)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            {
                days = 29;
            }
            else
            {
                days = 28;
            }
            break;
    }
    cout << days << endl;
    return 0;
}