#include<iostream>
using namespace std;

int main()
{
    int i,j;
    cout << "Multiplication Table" << endl;
    for(i = 1;i <= 9;i++)
    {
        for(j = 1;j <= 9;j++)
        {
            cout << j << "x" << i << "=" << i * j << "\t";
            //\t表示制表符，用于对齐输出结果
            cout << endl;
        }
    }
    return 0;
}