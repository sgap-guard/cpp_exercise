#include <iostream>
using namespace std;
int main()
{
    long long n,k;//n表示初始烟雾数量，k表示每轮生产烟雾数量
    cin >> n >> k;//输入初始烟雾数量和每轮生产烟雾数量
    long long total= n,butt = n;//total表示总烟雾数量，butt表示当前烟雾数量
    long long new_smoke = n / k;//new_smoke表示每轮生产的烟雾数量
    while(butt >= k)//当当前烟雾数量大于等于每轮生产烟雾数量时，继续走
    {
        if(butt == 0)//如果当前烟雾数量为0，说明没有烟雾了，跳出循环
            break;
        new_smoke = butt / k; //new_smoke表示每轮生产的烟雾数量
        butt = butt % k + new_smoke;//当前烟雾数量，取余操作得到当前烟雾数量，加上每轮生产的烟雾数量
               total += new_smoke; //总烟雾数量加上每轮生产的烟雾数量
    }
    cout << total << endl;
    return 0;
}