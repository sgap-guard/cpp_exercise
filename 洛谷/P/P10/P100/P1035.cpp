#include <iostream>
using namespace std;
int main()
{
    int k;//k表示目标距离
    cin >> k;//输入目标距离
    double Sn =0;//Sn表示总和，取整操作得到总和
    int n = 0;
    while(true)
    {
        n++;//每次走，计数器加一
        Sn += 1.0/n;//每次走的距离，取整操作得到每次走的距离
        if (Sn > k)//如果总和超过目标距离，说明已经到达目标距离，跳出循环
        {
            cout << n << endl;
            break;
        }
    }
    return 0;
}