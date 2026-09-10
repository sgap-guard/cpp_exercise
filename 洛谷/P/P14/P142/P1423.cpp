#include<iostream>
using namespace std;
int main()
{
    double s;
    cin >> s;
    double sum=0;
    double step=2;
    int cnt=0;
    while(sum < s)
    {
        sum = sum + step;
        cnt = cnt + 1;
        step = step * 0.98;
    }
    cout << cnt << endl;
    return 0;
}