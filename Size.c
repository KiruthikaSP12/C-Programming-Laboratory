#include<stdio.h>
int main()
{
    int size;
    int inttype;
    float floattype;
    double doubletype;
    char chartype;
    printf("Size of int:%d bytes\n",sizeof (inttype));
    printf("Size of float:%d bytes\n",sizeof (floattype));
    printf("Size of double:%d bytes\n",sizeof (doubletype));
    printf("Size of char:%d bytes",sizeof (chartype));
    return 0;
}
