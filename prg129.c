  /* print while loop  ....  coloam capital
   a
   b C
   d E f
   g H i J
   k L m N o

  */
#include<stdio.h>
int main()
{
    int i,j,a='A';
    i=1;
while(i<=5)
    {
        j=1;
        while(j<=i)
       {

         if(j%2==0)
         {
               printf("\t%c",a);
                a++;
                j++;
         }
         else
         {
               printf("\t%c",a+32);
                a++;
                j++;
         }
       }
        printf("\n");
        i++;

     }
return 0;
}
