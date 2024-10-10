// find simple intrest
// no pera and no return
// with pera no return
// with pera with return ==>
// no pera with return

#include<stdio.h>

int intrest(int p,int r, int n)
{

    return (p*r*n)/100;


}

int main()
{
    int p,r,n;

    int intrest(int,int,int);

     printf("enter the price");
    scanf("%d",&p);

    printf("enter the rate");
    scanf("%d",&r);

    printf("enter the n");
    scanf("%d",&n);

    printf("simple intrest : %d",intrest(p,r,n));



    return 0;
}
