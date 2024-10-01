/* print with  do while.......
       *
      ***
     *****
    *******
   *********



*/
#include<stdio.h>
int main()
{
    int i,j,sp=10;
    i=1;
    do
    {

        j=1;
       do
        {

        printf(" ");
        j++;

        } while(j<=sp);
     j=1;
        do
        {
            printf("*");
            j++;
        }  while(j<=i);
        sp--;
        i+=2;
    printf("\n");
    }  while(i<=10);
    return 0;

}
