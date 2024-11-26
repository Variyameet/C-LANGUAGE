// find area of trangle
// no pera and no return    ==>
// with pera no return
// with pera with return
// no pera with return

#include<stdio.h>

void area()
{
    float h,b,at=0;


    printf("enter the height");
    scanf("%f",&h);

     printf("enter the width");
    scanf("%f",&b);



    at=0.5*h*b;

    printf("simple intrest : %f",at);
}

int main()
{
    void area();

    area();

    return 0;
}
