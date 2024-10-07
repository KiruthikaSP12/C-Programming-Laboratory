#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Eligible to vote");
    }
    else if(age<18 && age>=0)
    {
        printf("Ineligible to vote");
    }
    else if(age<0 || age>110)
    {
        printf("Invalid age");
    }
    return 0;
}
