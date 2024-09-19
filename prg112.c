/*print  whith  do  while loops
   11111
   22222
   33333
   44444
   55555
*/
#include<stdio.h>
int main()
{
int i,j;

i=1;

do
  { j=1;
    do
    {
        printf("%d",i);
        j++;
    } while(j<=5);
    printf("\n");
    i++;
  }while(i<=5);


    return 0;
}
