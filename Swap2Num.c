#include<stdio.h>
int main()
{
    int a=3,b=6,temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
