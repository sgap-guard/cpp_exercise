#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#define pi 3.141593
using namespace std;
int main()
{
    int T;//T代表题号
    cin >> T;//输入题号
    if (T == 1)
    {
        cout << "I love Luogu!" << endl;
    }
    else if(T == 2)
    {
        int a = 2,uim = 4,b;
        cout << a + uim << " " << 10 - a -uim << endl;
    }
    else if(T == 3)
    {
        int apple = 14,student = 4;
        cout << apple / student << endl;
        cout << apple/student * student << endl;
        cout << apple % student << endl;
    }
    else if(T == 4)
    {
        int happy = 500,student = 3;
        cout << fixed << setprecision(3) << (double)happy / student << endl;
    }
    else if(T == 5)
    {
        int jia = 260,yi = 220;
        int vj = 12,vy = 20;
        cout << (jia + yi) / (vj + vy) << endl;
    }
    else if(T == 6)
    {
        int a = 9,b = 6;
        cout << sqrt(a * a + b * b) << endl;
    }
    else if(T == 7)
    {
        int total = 100;
        total = total + 10;
        cout << total << endl;
        total = total - 20;
        cout << total << endl;
        total = total - total;
        cout << total << endl;
    }
    else if(T == 8)
    {
        int r =5;
        double C = 2 * pi * r;
        double S = pi * r * r;
        double V = 4.0 / 3 * pi * r * r * r;
        cout << C << endl << S << endl << V << endl;
    }
    else if(T == 9)
    {
        int a = 1;
        a = (a + 1) * 2;
        a = (a + 1) * 2;
        a = (a + 1) * 2;
        cout << a << endl;
    }
    else if(T == 10)
    {
        double add, old, x;
        add = (8*30 - 10*6) / (30.0 - 6.0);
        old = 8 * 30 - 30 * add;
        x = (old + 10 * add) / 10.0;
        cout << x << endl;
    }
    else if(T == 11)
    {
        int va = 5,vb = 8;
        cout << 100.0 / (vb-va) << endl;
    }
    else if(T == 12)
    {
        cout << int('M') - 65 + 1  << endl;
        cout << char(65 + 18 - 1) << endl;
    }
    else if(T == 13)
    {
        int r1 = 4,r2 = 10;
        double v1 = 4.0 / 3 * pi * r1 * r1 * r1,v2 = 4.0 / 3 * pi * r2 * r2 * r2;
        double V = v1 + v2;
        int d = int(cbrt(V));
        cout << d << endl;
    }
    else if(T == 14)
    {
        double x1,x2;
        double delta = sqrt(120*120 - 4*1*3500);
        x1 = (120 + delta)/2.0;
        x2 = (120 - delta)/2.0;
        cout << int(round(min(x1,x2))) << endl;
    }
    return 0;
}