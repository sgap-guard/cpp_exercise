#include<iostream>
using namespace std;
int main()
{
    class people
    {
        private:
        string m_name;
        int m_age;
        bool m_sex;
        
        public:
        void setName(const string& name)
        {
            m_name = name;
        }
        void setAge(int age)
        {
            m_age = age;
        }
        void setSex(bool sex)
        {
            m_sex = sex;
        }
        string getName()
        const 
        {
            return m_name;
        }
        int getAge()
        const
        {
            return m_age;
        }
        bool getSex()
        const
        {
            return m_sex;
        }
        void eat()
        {
            cout << m_name << " is eating." << endl;
        }
        void show()
        {
            cout << "Name: " << m_name << endl;
            cout << "Age: " << m_age << endl;
            cout << "Sex: " << (m_sex ? "male" : "female") << endl;
        }
    }
}