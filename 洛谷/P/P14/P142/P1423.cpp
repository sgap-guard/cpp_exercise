#include<iostream>
using namespace std;
int main()
{
    double s;
    cin >> s;
    double sum=0;//sum表示总距离，取整操作得到总距离
    double step=2;//step表示每次走的距离，取整操作得到每次走的距离
    int cnt=0;
    while(sum < s)//当总距离小于目标距离时，继续走
    {
        sum = sum + step;//每次走的距离，取整操作得到每次走的距离
        cnt = cnt + 1;  //每次走，计数器加一
        step = step * 0.98;//每次走的距离，乘以0.98，取整操作得到每次走的距离
    }
    cout << cnt << endl;
    return 0;
}