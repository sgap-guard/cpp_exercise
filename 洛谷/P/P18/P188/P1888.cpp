#include<iostream>
#include<algorithm>
using namespace std;

typedef long long ll;
//欧几里得算法，求最大公约数
ll gcd(ll x, ll y)
{
    while(y != 0)
    {
        ll rem = x % y;
        x = y;//交换x和y，使x为较大数
        y = rem;//y为较大数的余数
        //重复以上步骤，直到y为0，x为最大公约数
    }
    return x;
}

int main()
{
    ll a,b,c;
    cin >> a >> b >> c;
    ll hyp = max({a,b,c}); //斜边，最大数
    ll s1,s2;
    //取出两条直角边（不是斜边的两个）
    if(hyp == a)//  如果a是斜边
    {
        s1 = b; s2 = c;
    }
    else if(hyp == b)//  如果b是斜边
    {
        s1 = a; s2 = c;
    }
    else//如果c是斜边
    {
        s1 = a; s2 = b;
    }
    ll short_side = min(s1, s2); //最短直角边,取较小数
    ll g = gcd(short_side, hyp);//g表示最大公约数
    ll son = short_side / g;//分子表示最短直角边，取整操作得到分子
    ll mom = hyp / g;//分母表示斜边，取整操作得到分母
    cout << son << "/" << mom << endl;
    return 0;
}
