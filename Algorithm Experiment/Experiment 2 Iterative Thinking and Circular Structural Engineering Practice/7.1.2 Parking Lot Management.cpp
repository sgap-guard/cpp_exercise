#include <bits/stdc++.h>
using namespace std;

struct Car
{
    int id;
    int time;
};

signed main()
{
    int n; cin >> n;
    vector<Car> park;
    vector<Car> wait;
    char op; int id, time;

    while (cin >> op >> id >> time)
    {
        if (op == 'E') break;
        if (op == 'A')
        {
            if ((int)park.size() < n)
            {
                park.push_back({id, time});
                cout << "car#" << id << " in parking space #" << park.size() << "\n";
            }
            else
            {
                wait.push_back({id, time});
                cout << "car#" << id << " waiting\n";
            }
        }
        else if (op == 'D')
        {
            bool found = false;
            vector<Car> temp;
            while (!park.empty())
            {
                Car c = park.back();
                park.pop_back();
                if (c.id == id)
                {
                    found = true;
                    cout << "car#" << id << " out,parking time " << time - c.time << "\n";
                    break;
                }
                else
                {
                    temp.push_back(c);
                }
            }

            if (!found)
            {
                for (int i = temp.size() - 1; i >= 0; i--)
                    park.push_back(temp[i]);
                cout << "the car not in park\n";
                continue;
            }

            for (int i = temp.size() - 1; i >= 0; i--)
                park.push_back(temp[i]);
            if (!wait.empty())
            {
                Car w = wait.front();
                wait.erase(wait.begin());
                w.time = time;
                park.push_back(w);
                cout << "car#" << w.id << " in parking space #" << park.size() << "\n";
            }
        }
    }
    return 0;
}