#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        int len = 4 * m + 1;

        // 第1行：len个*
        cout << string(len, '*') << endl;

        // 第2行：" *" + 中间空格 + "*"
        cout << " *";
        // 中间空格数量 = len - 4
        cout << string(len - 4, ' ');
        cout << "*" << endl;

        // 第3行："  " + (4*m-3)个*
        cout << "  " << string(4*m - 3, '*') << endl;

        // m-1个单元，t从0到m-2
        for (int t = 0; t <= m - 2; t++)
        {
            int pad = 2 + t * 4;
            string space(pad, ' ');
            cout << space << "*" << endl;
            cout << space << "**" << endl;
            if (m == 2)
            {
                cout << space << "* *" << endl;
            }
            else
            {
                cout << space << "*  *" << endl;
            }
            cout << space << "**" << endl;
            cout << space << "*" << endl;
            cout << space << "*" << endl;
            cout << space << "*" << endl;
            cout << space << "*" << endl;
        }
    }
    return 0;
}
