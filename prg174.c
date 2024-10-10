// find simple intrest
// no pera and no return ==>
// with pera no return
// with pera with return
// no pera with return

#include<stdio.h>

void intrest()
{
    int p,r,n,si=0;

    printf("enter the price");
    scanf("%d",&p);

    printf("enter the rate");
    scanf("%d",&r);

    printf("enter the n");
    scanf("%d",&n);

    si=(p*r*n)/100;

    printf("simple intrest : %d",si);
}

int main()
{
    void intrest();

    intrest();

    return 0;
}
