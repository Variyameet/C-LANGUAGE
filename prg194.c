// find area of trangle
// no pera and no return
// with pera no return
// with pera with return
// no pera with return  ==>

#include<stdio.h>

float area()
{
    float h,b;


    printf("enter the height");
    scanf("%f",&h);

     printf("enter the width");
    scanf("%f",&b);



    return 0.5*h*b;


}

int main()
{
   float area();

    printf("area of trangle : %f",area());



    return 0;
}
