// double pointer

#include<stdio.h>

int main()
{
    int x;
    int *ptr1,**ptr2;
    x=10;
    ptr1=&x;
    ptr2=&ptr1;

    printf("\n value of x : %d",x);
    printf("\n address  of x : %u",&x);

    printf("\n address of x using ptr1 :%u",ptr1);
    printf("\n address of x using ptr2 :%u",*ptr2);

    printf("\n value of x using ptr1 :%d",*ptr1);
    printf("\n value of x using ptr2 :%d",**ptr2);

    printf("\naddress of ptr1 : %u",&ptr1);
    printf("\n address of ptr1 using ptr2 :%u",ptr2);
    printf("\n address of ptr2 :%u ",&ptr2);


    return 0;
}
