/*print  whith  do  while loops
    22222
    44444
    66666
    88888
    1010101010
*/
#include<stdio.h>
int main()
{
int i,j;

i=2;

do
  { j=2;
    do
    {
        printf("\t%d",i);
        j=j+2;
    } while(j<=10);
    printf("\n");
    i=i+2;
  }while(i<=10);


    return 0;
}
