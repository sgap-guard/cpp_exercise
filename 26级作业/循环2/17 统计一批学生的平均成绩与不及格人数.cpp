#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double score;
    double sum = 0.0;
    int cnt = 0;
    int fail = 0;
    while (cin >> score)
    {
        if (score < 0)
        {
            break;
        }
        sum += score;
        cnt++;
        if (score < 60)
        {
            fail++;
        }
    }
    double average = 0.0;
    if (cnt != 0)
    {
        average = sum / cnt;
    }
    cout << fixed << setprecision(2);
    cout << "Average = " << average << endl;
    if (cnt != 0)
    {
        cout << "Count = " << fail << endl;
    }
    return 0;
}
