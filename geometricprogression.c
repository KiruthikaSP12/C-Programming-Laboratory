#include<stdio.h>
#include<math.h>
int main()
{
    int a,r,n;
    scanf("%d%d%d",&a,&r,&n);
    a=a*pow(r,n-1);
    printf("The nth term of the series is:%d",a);
    return 0;
}

