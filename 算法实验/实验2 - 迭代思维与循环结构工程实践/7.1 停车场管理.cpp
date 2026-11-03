#include <bits/stdc++.h>
using namespace std;

struct Car
{
    string id;
    int inTime;
};

int main()
{
    int n; cin >> n;
    vector<Car> park;      // 停车场（栈）
    queue<string> wait;    // 便道（队列）
    char op;
    string carId;
    int time;
    while (cin >> op >> carId >> time)
    {
        if (op == 'E')
        {
            break;
        }
        if (op == 'A')
        {
            if ((int)park.size() < n)
            {
                Car c;
                c.id = carId;
                c.inTime = time;
                park.push_back(c);
                cout << "car" << carId << " in parking space #" << park.size() << endl;
            }
            else
            {
                wait.push(carId);
                cout << "car" << carId << " waiting" << endl;
            }
        }
        else if (op == 'D')
        {
            bool found = false;
            // 在停车场中查找
            for (int i = 0; i < (int)park.size(); i++)
            {
                if (park[i].id == carId)
                {
                    found = true;
                    int stayTime = time - park[i].inTime;
                    cout << "car" << carId << " out,parking time " << stayTime << endl;
                    // 让路车辆临时栈
                    vector<Car> temp;
                    for (int j = i + 1; j < (int)park.size(); j++)
                    {
                        temp.push_back(park[j]);
                    }
                    // 恢复停车场
                    park.clear();
                    for (int k = (int)temp.size() - 1; k >= 0; k--)
                    {
                        park.push_back(temp[k]);
                    }
                    // 便道第一辆车进入停车场
                    if (!wait.empty())
                    {
                        string nextCar = wait.front();
                        wait.pop();

                        Car nc;
                        nc.id = nextCar;
                        nc.inTime = time;
                        park.push_back(nc);

                        cout << "car" << nextCar << " in parking space #" << park.size() << endl;
                    }
                    break;
                }
            }
            // 不在停车场
            if (!found)
            {
                // 检查是否在便道
                bool inWait = false;
                queue<string> tempQueue;
                while (!wait.empty())
                {
                    string cur = wait.front();
                    wait.pop();
                    if (cur == carId)
                    {
                        inWait = true;
                    }
                    else
                    {
                        tempQueue.push(cur);
                    }
                }
                wait = tempQueue;
                if (inWait)
                {
                    // 便道车辆离开，不收费
                    cout << "car" << carId << " out,parking time 0" << endl;
                }
                else
                {
                    cout << "the car not in park" << endl;
                }
            }
        }
    }
    return 0;
}