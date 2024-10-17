// find area of rectangle
// no pera and no return
// with pera no return  ==>
// with pera with return
// no pera with return

#include<stdio.h>

void area(int l,int b)
{
   
    printf("simple intrest : %d",l*b);
}

int main()
{
     int l,b;
    void area(int,int);

    printf("enter the length");
    scanf("%d",&l);

     printf("enter the brigth");
    scanf("%d",&b);

    area(l,b);

    return 0;
}
