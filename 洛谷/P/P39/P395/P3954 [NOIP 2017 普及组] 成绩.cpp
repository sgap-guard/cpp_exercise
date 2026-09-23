#include<iostream>
using namespace std;
int main()
{
    int A,B,C,N;
    cin >> A >> B >> C;
    N = A * 0.2 + B * 0.3 + C * 0.5;//N表示总成绩，取整操作得到总成绩
    cout << N << endl;
    return 0;
}