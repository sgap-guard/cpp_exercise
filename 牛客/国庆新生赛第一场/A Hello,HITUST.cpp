#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = R"(_   _   ___    _   _   _   _   ____   _____
| | | | |_ _|  | | | | | | | | / ___| |_   _|
| |_| |  | |   | |_| | | | | | \___ \   | |
|  _  |  | |   |  _  | | |_| |  ___) |  | |
|_| |_| |___|  |_| |_|  \___/  |____/   |_|)";
    //R"()"表示按照原样输出字符串，不进行转义处理
    cout << a << endl;
    return 0;
}