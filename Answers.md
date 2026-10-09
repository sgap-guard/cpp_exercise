这里首先讲解一个知识点： `R"()"`，这是一个字符串的字面值，用于表示多行字符串，按照原样直接输出，不会被解释为转义字符。使用时要使用双引号，不能使用单引号。要引用`<string>`头文件。参考下方第二题及其他代码。


1

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    cout << "Hello World!" << endl;
    return 0;
}
```

2

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a =  R"(Programming is fun.
And Programming in C is even more fun!)";
    cout << a << endl;
    return 0;
}
```

3

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(*****************
  Hello, world!
*****************)";
    cout << a << endl;
    return 0;
}
```

4

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(2025 - ai nin ai wo)";
    cout << a << endl;
    return 0;
}
```

5

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(* * * *
 * * *
  * *
   *)";
    cout << a << endl;
    return 0;
}
```

6

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(****
***
**
*)";
    cout << a << endl;
    return 0;
}
```

7

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(  A
A   A
  A)";
    cout << a << endl;
    return 0;
}
```

8

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(****
*
*
****)";
    cout << a << endl;
    return 0;
}
```

9

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(************
  Welcome
************)";
    cout << a << endl;
    return 0;
}
```

10

```cpp
#include <iostream>
using namespace std;

signed main()
{
    cout << "I" << endl;
    cout << " " << endl;
    cout << "L" << endl;
    cout << "o" << endl;
    cout << "v" << endl;
    cout << "e" << endl;
    cout << " " << endl;
    cout << "G" << endl;
    cout << "P" << endl;
    cout << "L" << endl;
    cout << "T" << endl;
    return 0;
}
```

11

```cpp
#include <iostream>
using namespace std;

signed main()
{
    cout << "Talk is cheap. Show me the code." << endl;
    return 0;
}
```

12

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(   *
  ***
 *****
*******)";
    cout << a << endl;
    return 0;
}
```

13

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(  *
 ***
*****)";
    cout << a << endl;
    return 0;
}
```

14

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"($$$$$$$$$$$$
   hello!
$$$$$$$$$$$$)";
    cout << a << endl;
    return 0;
}
```

15

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(  *
 ***
*****
 ***
  *)";
    cout << a << endl;
    return 0;
}
```

16

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(  *
 * *
*   *
 * *
  *)";
    cout << a << endl;
    return 0;
}
```

17

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(*     *     *
 *    *    *
  *   *   *
   *  *  *
    * * *
*************
    * * *
   *  *  *
  *   *   *
 *    *    *
*     *     *)";
    cout << a << endl;
    return 0;
}
```

18

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********)";
    cout << a << endl;
    return 0;
}
```

19

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    cout << R"(D:\C Code\test\debug\hello world.exe)" << endl;
    return 0;
}
```

20

```cpp
#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a = R"(dir "D:\C Code\test")";
    cout << a << endl;
    return 0;
}
```
