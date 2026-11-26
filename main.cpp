#include <stdio.h>
#include <string.h>
int main()
{
    int a[2][3], *p;
    scanf("%d",&a[0][0]);
    printf("==%p\n", &a[0][0]);
    printf("==%p\n", &a[0]);
    printf("== =%p\n", a);
    return 0;
}