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
        x = y;
        y = rem;
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
    if(hyp == a)
    {
        s1 = b; s2 = c;
    }
    else if(hyp == b)
    {
        s1 = a; s2 = c;
    }
    else
    {
        s1 = a; s2 = b;
    }
    ll short_side = min(s1, s2); //最短直角边
    ll g = gcd(short_side, hyp);
    ll son = short_side / g;
    ll mom = hyp / g;
    cout << son << "/" << mom << endl;
    return 0;
}
