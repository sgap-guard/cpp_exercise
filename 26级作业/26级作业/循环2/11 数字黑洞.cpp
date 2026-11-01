#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int n; cin >> n;
    int count = 0;
    while (n != 495) 
    {
        int a = n / 100;
        int b = (n / 10) % 10;
        int c = n % 10;
        int digits[3] = {a, b, c};
        sort(digits, digits + 3);
        int minNum = digits[0] * 100 + digits[1] * 10 + digits[2];
        int maxNum = digits[2] * 100 + digits[1] * 10 + digits[0];
        n = maxNum - minNum;
        count++;
    }
    cout << count << endl;
    return 0;
}