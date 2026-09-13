#include<iostream>
#include<algorithm>//调用此库来使用max和min函数
using namespace std;
int main()
{
    long long a,b,c;
    cin >> a >> b >> c;
    cout << "The maximum number is : " << max(a,max(b,c)) << endl;
    //输出a,b,c中的最大值
    cout << "The minimum number is : " << min(a,min(b,c)) << endl;
    //输出a,b,c中的最小值
    return 0;
}