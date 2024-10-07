#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a>b || b>a)
    {
        printf("The largest number is:%d");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
