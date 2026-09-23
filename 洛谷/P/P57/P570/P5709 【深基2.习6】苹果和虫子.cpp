#include<iostream>
using namespace std;
int main()
{
    int m,t,s;
    cin >> m >> t >> s;
    
    if(t == 0)//如果在t=0时，就已经全部吃完，那么就输出0
    {
        cout << 0 << endl;
    }
    else
    {
        int eat = s / t;//计算吃掉多少个苹果
        if(eat <= m)//如果吃掉的苹果数小于等于m，那么就输出m-eat，因为剩下的苹果数就是m-eat
        {
        cout << m - eat << endl;//输出剩下的苹果数
        }
        else if(eat > m)//如果吃掉的苹果数大于m，那么就输出0，因为苹果数不够
        {
            cout << 0 << endl;//输出0
        }
        cout << 0 << endl;
    }
    return 0;
}