#include <iostream>
#include <iomanip> // 引入 iomanip 以使用 left 和 setw
using namespace std;

int main() 
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            cout << j << "*" << i << "=";
            cout << left << setw(4) << i * j; // 左对齐，占4个字符
        }
        cout << endl;
    } 
    return 0;
}