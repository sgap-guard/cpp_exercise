#include <bits/stdc++.h>
using namespace std;

struct Car
{
    int id;
    int time;
};

signed main()
{
    cout << "2604090112 刘佳林" << endl;
    int n; cin >> n;
    stack<Car> park;
    stack<Car> temp;
    queue<Car> wait;
    char op; int id, time;
    while (cin >> op >> id >> time)
    {
        if (op == 'E')
        {
            break;
        }
        if (op == 'A')
        {
            if ((int)park.size() < n)
            {
                park.push({id, time});
                cout << "car#" << id << " in parking space #" << park.size() << "\n";
            }
            else
            {
                wait.push({id, time});
                cout << "car#" << id << " waiting\n";
            }
        }
        else if (op == 'D')
        {
            bool found = false;
            while (!park.empty())
            {
                Car c = park.top();
                park.pop();
                if (c.id == id)
                {
                    found = true;
                    cout << "car#" << id << " out,parking time " << time - c.time << "\n";
                    break;
                }
                else
                {
                    temp.push(c);
                }
            }
            if (!found)
            {
                while (!temp.empty())
                {
                    park.push(temp.top());
                    temp.pop();
                }
                cout << "the car not in park\n";
                continue;
            }
            while (!temp.empty())
            {
                park.push(temp.top());
                temp.pop();
            }
            if (!wait.empty())
            {
                Car w = wait.front();
                wait.pop();
                w.time = time;
                park.push(w);
                cout << "car#" << w.id << " in parking space #" << park.size() << "\n";
            }
        }
    }
    return 0;
}