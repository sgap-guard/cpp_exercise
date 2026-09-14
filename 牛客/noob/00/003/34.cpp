#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);//关闭同步流，提高输入输出效率
    cin.tie(nullptr);//将cin与cout绑定，避免cout缓冲区问题
    int n;
    cin >> n;
    int maxv = -1e9;//定义一个int类型的maxv，用于存储最大值，初始值为-1e9
    int minv = 1e9;//定义一个int类型的minv，用于存储最小值，初始值为1e9
    for(int i = 1;i <= n;i++)
    {
        int x;
        cin >> x;
        maxv = max(maxv,x);//更新最大值，取当前值与maxv中的较大值
        minv = min(minv,x);//更新最小值，取当前值与minv中的较小值
        if(x > maxv) maxv = x;//如果当前值大于maxv，更新maxv为当前值
        if(x < minv) minv = x;//如果当前值小于minv，更新minv为当前值
    }
    cout << maxv - minv << endl;//输出最大值与最小值的差值
    return 0;
}
//maxv表示最大值，minv表示最小值，不需要调用max()和min()函数，也不需要调用头文件<algorithm>
//直接使用if语句更新maxv和minv即可
//maxv和minv具有更方便，更快速的更新方式。