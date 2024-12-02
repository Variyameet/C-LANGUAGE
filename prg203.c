//print 1 to n number total using recursion function

#include<stdio.h>
int recur(int n)
{
    if(n>0)
    {


     return  n+recur(n-1);

     //  return n;
    }
}
int main()
{
      int n=10,tot;
      tot=recur(n);


    printf("\n %d",tot);


    recur(n);


}
