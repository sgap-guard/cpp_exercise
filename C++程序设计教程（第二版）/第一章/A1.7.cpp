#include<stdio.h>
int main()
{
    int a;
    double b;
    char c;
    scanf("%d %c %lf",&a,&c,&b);//注意输入顺序，必须是整数、字符、浮精度浮点数
    printf("a =.0 %d,b = %f,c = %c\n",a,b,c);//输出a、b、c的值
    return 0;
}