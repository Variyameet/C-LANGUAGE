/*print  whith  do  while loops
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
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
        printf("%d",j);
        j++;
    } while(j<=5);
    printf("\n");
    i++;
  }while(i<=5);


    return 0;
}
