#include <iostream>
using namespace std;

int main() 
{
    int h, w, fill;
    char c;
    cin >> h >> w >> c >> fill;
    for (int i = 0; i < h; i++) 
    {
        if (fill == 1 || i == 0 || i == h - 1) 
        {
            for (int j = 0; j < w; j++) 
            {
                cout << c;
            }
        } 
        else 
        {
            cout << c;
            for (int j = 0; j < w - 2; j++) 
            {
                cout << " ";
            }
            cout << c;
        }
        cout << endl;
    }
    return 0;
}