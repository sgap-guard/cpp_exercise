#include<iostream>
#include<string>//这是为了使用string类型
using namespace std;
const double PI = 3.1415926535;

int main()
{
    double a,b;//a外圈的直径，b是环形圈的半径之差
    cin >> a >> b;
    double in_d = a - 2 * b;//内圈的直径
    double limit;//内圈的面积
    if(in_d <= 0)//内圈的直径小于等于0，内圈不存在
    {
        limit = 0.0;//内圈不存在面积为0.0
    }
    else
    {
        limit = PI * in_d * in_d / 4.0;//内圈存在面积为内圈直径的平方除以4
    }

    double mj,xygg,hxgg,Lily;//mj、xygg、hxgg、Lily分别是4个学生的腰部面积，与内圈的面积进行比较
    cin >> mj >> xygg >> hxgg >> Lily;//输入4个学生的腰部面积
    string res;//用于存储结果的字符串

    if(mj > limit) res += "mj ";//如果mj的腰部面积大于内圈的面积，将mj添加到结果字符串中
    if(xygg > limit) res += "xygg ";//如果xygg的腰部面积大于内圈的面积，将xygg添加到结果字符串中
    if(hxgg > limit) res += "hxgg ";//如果hxgg的腰部面积大于内圈的面积，将hxgg添加到结果字符串中
    if(Lily > limit) res += "Lily ";//如果Lily的腰部面积大于内圈的面积，将Lily添加到结果字符串中

    if(res.empty())//如果结果字符串为空，说明没有学生腰部面积大于内圈的面积
        cout << "None" << endl;
    else
    {
        res.pop_back();//删除结果字符串的最后一个字符格式为空格
        cout << res << endl;//输出结果字符串
    }
    return 0;
}
