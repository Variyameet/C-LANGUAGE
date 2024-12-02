#include<stdio.h>
int recur(int n)
{
    // if(n>0)  head recursion becuse first function call
    // {
    //     recur(n-1);
    //     printf("\t %d",n);
    // }

     if(n>0)  //taile recursion becuse first print and last function call
    {
        printf("\t %d",n);
        recur(n-1);
    }
}
int main()
{
    int a=3;
    recur(a);
    return 0;
}
