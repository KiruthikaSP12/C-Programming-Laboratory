#include<stdio.h>
int main()
{
    int p,r,t;
    float SI;
    printf("Enter the principal amount:%d\n");
    scanf("%d",&p);
    printf("Enter the rate of interest:%d\n");
    scanf("%d",&r);
    printf("Enter the time:%d\n");
    scanf("%d",&t);
    SI=p*r*t/100;
    printf("Simple Interest:%f",SI);
    return 0;
}
