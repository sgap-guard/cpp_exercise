#include<iostream>
using namespace std;

int main()
{
    int i(0),ascii;
    char c;
    cout << "\t      ASCII Compiret Table\n";
    //\t是制表符，用于对齐输出，每个字符占7个位置
    for(ascii = 32;ascii <= 126;ascii++)//ASCII码32到126是可打印字符
    {
        c = ascii;
        cout << c << "="  << ascii << "\t";
        //\t是制表符，用于对齐输出，每个字符占7个位置
        i++;
        if(i % 7 ==0)//每7个字符换行
        //i % 7 == 0是判断i是否是7的倍数
        {
            cout << endl;
            //在这里换行是因为每个字符占7个位置，所以7个字符后换行
        }
    }
    return 0;
}