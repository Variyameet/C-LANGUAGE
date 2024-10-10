// find simple intrest
// no pera and no return
// with pera no return
// with pera with return
// no pera with return  ==>

#include<stdio.h>

int intrest()
{
     int p,r,n;

     printf("enter the price");
    scanf("%d",&p);

    printf("enter the rate");
    scanf("%d",&r);

    printf("enter the n");
    scanf("%d",&n);

    return (p*r*n)/100;


}

int main()
{


    int intrest();


    printf("simple intrest : %d",intrest());



    return 0;
}
