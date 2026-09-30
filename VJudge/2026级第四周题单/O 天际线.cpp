#include<bits/stdc++.h>
using namespace std;

long long event[1000000];

struct Event
{
    int x,type,height;
};

int main()
{
    int M;
    cin >> M;
    for (int i = 1; i <= M; i++)
    {
        int L,H,R;
        cin >> L >> H >> R;
        event[2 * i -1] = (L,1,H);
        event[2 * i] = (R,-1,H);
    }

    
}