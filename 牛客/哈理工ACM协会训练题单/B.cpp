#include<iostream>
using namespace std;
int main()
{
    cout << "printf(\"Hello world!\\n\");" << endl;
    //引号内再次使用引号，需要使用反斜杠\转义
    //引号内输出换行符，需要使用反斜杠\\n转义
    cout << "cout << \"Hello world!\" << endl;" << endl;
}