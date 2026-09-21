#include<iostream>
using namespace std;
// void change(int x)
// {
//     x = 999;
//     cout << "函数内部x的值为：" << x << endl;
// }
// void changel(int &x)
// {
//     x = 999;
//     cout << "函数内部x的值为：" << x << endl;
// }
// int main()
// {
//     int x = 10;
//     change(x);//按值传递，x的值不会改变
//     cout << "函数外部x的值为：" << x << endl;
//     changel(x);//按引用传递，x的值会改变
//     cout << "函数外部x的值为：" << x << endl;
//     return 0;
// }

class Refrig
{
    public:
    int height;
    string color;
    void openRefig()
    {
    cout << "Refig is open" << endl;
    }
};
int main()
{
    int a = 10;
    Refrig ref;
    ref.height = 200;
    ref.openRefig();
    cout << ref.height << endl;
    return 0;
}