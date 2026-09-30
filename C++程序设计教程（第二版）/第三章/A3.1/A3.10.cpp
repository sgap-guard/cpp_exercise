#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    float t = 1,e = 0;
    while(t > 0.00001)
    {
        e += t;//累加t到e中
        i++;//将i增加1
        t = t / i;//将t除以i，得到t的下一个值
    }
    cout << "e = " << e << endl;
    return 0;
}

//这里是怎么表示阶乘的
//t = t / i;很重要，每次循环都除以i，这样t的值就会越来越小
//t是1/n的近似值，n是奇数，从1开始，每次增加2，得到1,3,5,7,9,...等奇数
//s是符号，从1开始，每次取负，得到1,-1,1,-1,...等交替的符号
