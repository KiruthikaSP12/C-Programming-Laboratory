#include<stdio.h>
int main()
{
    int tam,eng,mat,sci,soc,tot,avg;
    scanf("%d%d%d%d%d",&tam,&eng,&mat,&sci,&soc);
    tot=tam+eng+mat+sci+soc;
    printf("%d\n",tot);
    avg=tot/5;
    printf("%d\n",avg);
    if(tam<0||tam>100 || eng<0||eng>100 || mat<0||mat>100 || sci<0||sci>100 || soc<0||soc>100)
    {
        printf("Invalid mark");
    }
    else if (tam<50||eng<50||mat<50||sci<50||soc<50)
    {
        printf("Fail");
    }
    else if (avg>=91 && avg<=100)
    {
        printf("Grade O");
    }
    else if (avg>=81 && avg<=90)
    {
        printf("Grade A+");
    }
    else if (avg>=71 && avg<=80)
    {
        printf("Grade A");
    }
    else if (avg>=61 && avg<=70)
    {
        printf("Grade B+");
    }
    else if (avg>=50 && avg<=60)
    {
        printf("Grade B");
    }
    return 0;
}

