#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,divi,mod;
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d + %d = %d\n",a,b,sum);
    sub=a-b;
    printf("%d - %d = %d\n",a,b,sub);
    mul=a*b;
    printf("%d * %d = %d\n",a,b,mul);
    divi=a/b;
    printf("%d / %d = %d\n",a,b,divi);
    mod=a%b;
    printf("%d  %%  %d  = %d",a,b,mod);
    return 0;
}
