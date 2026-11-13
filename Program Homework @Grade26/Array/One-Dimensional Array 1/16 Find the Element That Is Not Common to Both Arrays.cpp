#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr1, arr2;
    int n1, n2;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }

    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        arr2.push_back(x);
    }
    vector<int> result;
    vector<bool> printed(100000, false);
    for (int x : arr1)
    {
        bool found = false;
        for (int y : arr2)
        {
            if (x == y)
            {
                found = true;
                break;
            }
        }
        if (!found && !printed[x + 50000])
        {
            result.push_back(x);
            printed[x + 50000] = true;
        }
    }
    for (int x : arr2)
    {
        bool found = false;
        for (int y : arr1)
        {
            if (x == y)
            {
                found = true;
                break;
            }
        }
        if (!found && !printed[x + 50000])
        {
            result.push_back(x);
            printed[x + 50000] = true;
        }
    }
    for (size_t i = 0; i < result.size(); i++)
    {
        if (i > 0)
        {
            cout << " ";
        }
        cout << result[i];
    }
    cout << endl;
    return 0;
}