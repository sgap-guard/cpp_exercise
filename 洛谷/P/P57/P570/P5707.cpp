#include<iostream>//输入输出流
#include<iomanip>//格式化输出流
#include<cmath>//数学库
using namespace std;
int main()
{
    long s,v;//s表示距离，v表示速度
    cin >> s >> v;//输入距离和速度
    double W_t = double(s) / v;//W_t表示步行时间，单位为分钟，取整操作得到步行时间
    int walk = ceil(W_t); 
    //使用ceil向上取整
    int T = 480 - walk - 10;
    //T表示到达时间，480表示8点，walk表示步行时间，10表示等待时间
    int HH,MM; //HH表示小时，MM表示分钟
    if(T < 0)
    {
        T += 1440;
        //时间可能出现负数，即前一天，需要加上1440分钟，即24小时
    }
    HH = T / 60;
    //HH表示小时，取整操作得到小时数
    MM = T % 60;
    //MM表示分钟，取余操作得到分钟数
    cout << setfill('0') << setw(2) << HH << ":" << setfill('0') << setw(2) << MM << endl;
    //输出结果，setfill('0')表示用0填充，setw(2)表示输出宽度为2位，不足2位用0填充
    return 0;
}