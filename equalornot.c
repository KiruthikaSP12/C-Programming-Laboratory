#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a==b || b==a)
    {
        printf("It is equal");
    }
    else
    {
        printf("It is not equal");
    }
    return 0;
}
