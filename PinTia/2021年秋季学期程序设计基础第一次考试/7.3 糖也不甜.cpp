#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    long sum = n + 1024 + 512 - 1534 - 1;
    int total = sum / m;
    cout << total << endl;
    return 0;
}