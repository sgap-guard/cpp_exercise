#include <iostream>
#include <vector>//为什么需要高精度？因为阶乘的结果会很大，超过int或long long的范围，所以需要使用高精度计算。这里用vector来表示大数。
using namespace std;

// 高精度乘低精度：A * b，返回新大数
vector<int> mul(vector<int> A, int b)//A是大数，b是低精度数
//用法是：A = mul(A, b);//A = mul(A, 10); // A *= 10
{
    vector<int> C;//C是结果大数
    int carry = 0;//carry是进位
    for(int i = 0; i < A.size(); i++)//遍历A的每一位
    {
        int t = A[i] * b + carry;//t是当前位的结果
        C.push_back(t % 10);//将t的个位数存入C,即C.push_back(t % 10);
        carry = t / 10;//将t的十位数存入carry,即carry = t / 10;
    }
    while(carry > 0)//如果还有进位，继续存入C
    {
        C.push_back(carry % 10);//将carry的个位数存入C,即C.push_back(carry % 10);
        carry /= 10;//将carry的十位数存入carry,即carry /= 10;
    }
    return C;
}

// 高精度加法 A + B
vector<int> add(vector<int> A, vector<int> B)//A和B是大数
//用法是：A = add(A, B);//A = add(A, B);//A += B
{
    vector<int> C;//C是结果大数
    int carry = 0;//carry是进位
    for(int i = 0; i < A.size() || i < B.size(); i++)   //遍历A和B的每一位
    {
        if(i < A.size()) carry += A[i];//如果A的当前位有值，就加到carry上
        if(i < B.size()) carry += B[i];//如果B的当前位有值，就加到carry上
        //这里为什么用数组下标访问元素？因为vector是一个动态数组，可以通过下标访问元素。
        C.push_back(carry % 10);//将carry的个位数存入C,即C.push_back(carry % 10);
        carry /= 10;//将carry的十位数存入carry,即carry /= 10;
    }
    if(carry) C.push_back(carry);//如果还有进位，就存入C
    return C;
}

int main()
{
    int n;
    cin >> n;
    vector<int> fact = {1}; // 当前i!，初始1!
    vector<int> sum = {0};  // 总和
    
    for(int i = 1; i <= n; i++)
    {
        fact = mul(fact, i);   // fact = fact * i 得到 i!
        sum = add(sum, fact);  // sum += i!
    }
    // 逆序输出
    for(auto it = sum.rbegin(); it != sum.rend(); it++)//遍历sum的每一位
        cout << *it;
    return 0;
}
//高精度四则运算
//1.高精度乘低精度：A * b，返回新大数，用数组下标访问元素。
//2.高精度加法：A + B，返回新大数，用数组下标访问元素。
//3.高精度减法：A - B，返回新大数，用数组下标访问元素。
//4.高精度除法：A / b，返回新大数，用数组下标访问元素。
//5.高精度取余：A % b，返回新大数，用数组下标访问元素。
//6.高精度取整：A / b，返回新大数，用数组下标访问元素。

//题后反思
//本题考查了什么知识点?
//1.高精度四则运算,用数组下标访问元素。
//2.高精度阶乘,用数组下标访问元素。
//vector的合理使用,用数组下标访问元素。
//本题的难点在哪里?
//1.高精度四则运算,用数组下标访问元素。
//2.高精度阶乘,用数组下标访问元素。
//本题逻辑性很强，需要根据阶乘的定义，用高精度四则运算来实现。
//本题的收获是什么?
//1.掌握了高精度四则运算,用数组下标访问元素。
//2.掌握了高精度阶乘,用数组下标访问元素。
//3.提高了逻辑思维能力,能够根据题意,用高精度四则运算来实现。
//4.提高了编程能力,能够用数组下标访问元素。
//5.提高了对vector的理解,能够合理使用vector来实现高精度四则运算。

//本题的意义
//本题的意义在于,通过高精度四则运算,实现了高精度阶乘的计算,并且能够用数组下标访问元素。这对于解决一些需要高精度计算的问题非常有用。
//本题的难度
//本题的难度在于,需要掌握高精度四则运算,用数组下标访问元素,并且能够根据题意,用高精度四则运算来实现。


//本题的逻辑在于
//1.输入n,即需要计算n!的值。
//2.初始化fact为1,即当前i!的值。
//3.初始化sum为0,即总和。
//4.循环n次,每次计算i!的值,并将其加到sum中。
//5.输出sum的值,即n!的值。
