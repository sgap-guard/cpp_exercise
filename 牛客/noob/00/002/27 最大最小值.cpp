#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    cout << "The maximum number is : "<< max(a,max(b,c)) << endl; 
    cout << "The minimum number is : "<< min(a,min(b,c)) << endl;
    //max与min可以同时处理多个参数，返回最大值或最小值
    //不能多打或少打空格使之符合题目要求
    return 0;
}