#include<stdio.h>
int main()
{
    int basicpay;
    float bonus,travelallowances,netsalary;
    scanf("%d",&basicpay);
    if(basicpay>=0 && basicpay<=10000)
    {
        bonus=basicpay*2/100.0;
        printf("%f\n",bonus);
        travelallowances=basicpay*1/100.0;
        printf("%f\n",travelallowances);
        netsalary=basicpay+bonus+travelallowances;
        printf("%f",netsalary);
    }
    else if(basicpay>=10001 && basicpay<=25000)
    {
        bonus=basicpay*5/100.0;
        printf("%f\n",bonus);
        travelallowances=basicpay*2/100.0;
        printf("%f\n",travelallowances);
        netsalary=basicpay+bonus+travelallowances;
        printf("%f",netsalary);
    }
    else if(basicpay>=25001 && basicpay<=50000)
    {
        bonus=basicpay*10/100.0;
        printf("%f\n",bonus);
        travelallowances=basicpay*3/100.0;
        printf("%f\n",travelallowances);
        netsalary=basicpay+bonus+travelallowances;
        printf("%f",netsalary);
    }
    else if(basicpay>=50001 && basicpay<=100000)
    {
        bonus=basicpay*15/100.0;
        printf("%f\n",bonus);
        travelallowances=basicpay*5/100.0;
        printf("%f\n",travelallowances);
        netsalary=basicpay+bonus+travelallowances;
        printf("%f",netsalary);
    }
    else
    {
        bonus=basicpay*20/100.0;
        printf("%f\n",bonus);
        travelallowances=basicpay*5/100.0;
        printf("%f\n",travelallowances);
        netsalary=basicpay+bonus+travelallowances;
        printf("%f",netsalary);
    }
    return 0;
}

