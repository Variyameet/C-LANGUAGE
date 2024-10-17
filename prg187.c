// find area of rectangle
// no pera and no return    ==>
// with pera no return
// with pera with return
// no pera with return

#include<stdio.h>

void area()
{
    int l,b,ar=0;

    printf("enter the length");
    scanf("%d",&l);

     printf("enter the brigth");
    scanf("%d",&b);



    ar=l*b;

    printf("simple intrest : %d",ar);
}

int main()
{
    void area();

    area();

    return 0;
}
