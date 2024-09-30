/*
    print whith do while

    1
    01
    010
    1010
    10101
*/

#include<stdio.h>
int main()
{
    int i,j,a=0;
    i=1;
    do
    {
        j=1;
       do
       {
         if(a==0)
         {
               printf("\t%d",a+1);
                a++;
                j++;
         }
         else
         {
               printf("\t%d",a-1);
                a--;
                j++;
         }
       } while(j<=i);

        printf("\n");
        i++;
     }while(i<=5);
return 0;
}
