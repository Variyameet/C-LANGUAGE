/*print  whith   while loops
    * * * * *
     * * * *
      * * *
       * *
        *
*/
#include<stdio.h>
int main()
{
int i,j,sp=10;

i=1;
while(i<=5)
  {
     j=1;
     while(j<=sp)
    { printf(" ");
      j++;
    }

         j=5;
         while(j>=i)
         {
          printf(" *");
          j--;
         }


     sp++;
      i++;
    printf("\n");

  }
   return 0;
}
