#include <iostream>
#include <algorithm> // sort函数
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    //这里为什么用数组呢？因为sort函数只能对数组进行排序
    //什么是sort函数？sort函数是C++ STL中的一个排序函数，可以对数组、向量、字符串等进行排序
    //为什么要排序？因为我们需要判断三角形的三条边是否满足三角形的三边关系
    sort(arr, arr + 3);
    //sort函数的参数是数组的首地址和数组的尾地址（不包含尾地址），返回值为void
    //返回值为void是因为sort函数是原地排序，不会返回新的数组
    //sort函数的用法是sort(arr, arr + 3);
    //这里arr是数组的首地址，arr + 3是数组的尾地址（不包含尾地址）
    //sort函数会将数组中的元素按升序排序
    int x = arr[0], y = arr[1], z = arr[2];//将排序后的数组赋值给x、y、z
    if (x + y <= z)//判断三角形的三边关系是否成立
    {
        cout << "Not triangle" << endl;//如果三角形的三边关系不成立，输出Not triangle
    }
    else
    {
        // 判断直角/锐角/钝角
        long long s = 1LL * x * x + 1LL * y * y;//计算三角形的三条边的平方和，注意这里用1LL是 long long 类型的1，避免溢出
        long long z2 = 1LL * z * z;//计算三角形的三条边的平方和
        if (s == z2)//如果三角形的三条边的平方和等于三角形的三条边的平方和，那么就输出Right triangle，即直角三角形
        {
            cout << "Right triangle" << endl;
        }
        if (s > z2)//如果三角形的三条边的平方和大于三角形的三条边的平方和，那么就输出Acute triangle，即锐角三角形
        {
            cout << "Acute triangle" << endl;
        }
        if (s < z2)//如果三角形的三条边的平方和小于三角形的三条边的平方和，那么就输出Obtuse triangle，即钝角三角形
        {
            cout << "Obtuse triangle" << endl;
        }

        // 判断等腰
        if (x == y || y == z || x == z)//如果三角形的三条边中，有两条边相等，那么就输出Isosceles triangle，即等腰三角形
        {
            cout << "Isosceles triangle" << endl;
        }
        // 判断等边
        if (x == y && y == z)//如果三角形的三条边中，有三条边相等，那么就输出Equilateral triangle，即等边三角形
        {
            cout << "Equilateral triangle" << endl;
        }
    }
    return 0;
}
