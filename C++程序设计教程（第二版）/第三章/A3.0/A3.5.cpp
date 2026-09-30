#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Please input your mark: ";
    cin >> mark;
    if(mark>=90)
        cout<<"优秀"<<endl;
    else if(mark>=80)
        cout<<"良好"<<endl;
    else if(mark>=70)
        cout<<"中等"<<endl;
    else if(mark>=60)
        cout<<"及格"<<endl;
    else
        cout<<"不及格"<<endl;
    return 0;
}