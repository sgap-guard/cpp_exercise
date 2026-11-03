 #include <iostream>
using namespace std;

int main() 
{
    int target, N;
    cin >> target >> N;
    int guess;
    int count = 0;
    while (count < N) 
    {
        cin >> guess;
        count++;
        if (guess < 0) 
        {
            cout << "Game Over" << endl;
            return 0;
        }
        if (guess > target) 
        {
            cout << "Too big" << endl;
        } 
        else if (guess < target) 
        {
            cout << "Too small" << endl;
        } 
        else 
        {
            if (count == 1) 
            {
                cout << "Bingo!" << endl;
            } 
            else if (count <= 3) 
            {
                cout << "Lucky You!" << endl;
            } 
            else 
            {
                cout << "Good Guess!" << endl;
            }
            return 0;
        }
    }
    cout << "Game Over" << endl;
    return 0;
}