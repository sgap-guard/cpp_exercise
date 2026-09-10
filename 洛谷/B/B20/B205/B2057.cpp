#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max_score = 0;
    for (int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        if(x > max_score)
        {
            max_score = x;
        }
        
    }
    cout << max_score << endl;
    return 0;
}