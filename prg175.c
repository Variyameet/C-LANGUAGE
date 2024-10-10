// find simple intrest
// no pera and no return
// with pera no return  ==>
// with pera with return
// no pera with return

#include<stdio.h>

void intrest(int p,int r,int n)
{


    printf("simple intrest : %d",(p*r*n)/100);
}

int main()
{
    int p,r,n,si=0;
    void intrest(int,int,int);

     printf("enter the price");
    scanf("%d",&p);

    printf("enter the rate");
    scanf("%d",&r);

    printf("enter the n");
    scanf("%d",&n);



    intrest(p,r,n);

    return 0;
}
