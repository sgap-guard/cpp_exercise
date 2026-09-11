#include <iostream>
using namespace std;
int main()
{
  int n,day = 0;//n为新生人数，day为保护天数
  cin >> n;//输入新生人数
  while(n > 0)//当新生人数大于0时，继续保护
  {
    int temp = n;//临时变量，用于计算新生人数的各位数字之和
    int sum = 0;//新生人数的各位数字之和
    while(temp > 0)//计算新生人数的各位数字之和
    {
    int digit = temp % 10;//取新生人数的个位数,并将其加入到sum中,并更新temp为temp的十位数,直到temp为0
    sum += digit;//将个位数加入到sum中,并更新temp为temp的十位数,直到temp为0
    temp = temp / 10;//更新temp为temp的十位数,直到temp为0
    }
    n = n - sum;//新生人数减去新生人数的各位数字之和
    day ++;//保护天数加1
  }
  cout << day << endl;//输出保护天数
  return 0;
}