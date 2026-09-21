#include<iostream>
#include<cmath>
using namespace std;
class Animal
{
    public:
    void eat()
    {
        cout << "Eating Food." << endl;
    }
};
class Dog:public Animal
{
    public:
    void bark()
    {
        cout << "Wolf! Wolf!" << endl;
    }
};
int main()
{
    Dog myDog;
    myDog.eat();
    myDog.bark();
    int num = -10;
    cout << abs(num) << endl;
    char c = 'A';
    cout << c << " is a letter?" << endl << isalpha(c) << endl;
    return 0;
}
