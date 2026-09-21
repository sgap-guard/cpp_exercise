#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct Person
{
    string name;
    int y,m,d;
    int id;
};

bool cmp(Person a,Person b)
{
    if (a.y != b.y)
        return a.y < b.y;
    else if(a.m != b.m)
        return a.m < b.m;
    else if(a.d != b.d)
        return a.d < b.d;
    else
        return a.id > b.id;
}

int main()
{
    int n;
    cin >> n;
    Person p[100];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].name >> p[i].y >> p[i].m >> p[i].d;
        p[i].id = i + 1;
    }
    sort(p,p+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout << p[i].name << endl; //只输出名字！
    }
    return 0;
}
