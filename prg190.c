// find area of rectangle
// no pera and no return
// with pera no return
// with pera with return
// no pera with return  ==>

#include<stdio.h>

int area()
{
    int l,b;

    printf("enter the length");
    scanf("%d",&l);

     printf("enter the brigth");
    scanf("%d",&b);

    return l*b;


}

int main()
{
    int area();

     printf("area of tra : %d", area());

    return 0;
}
