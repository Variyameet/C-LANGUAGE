//print ...do   while.....
/*

    A
    BC
    DEF
    GHIJ
    KLMNO

*/

#include<stdio.h>
int main()
{
    int i,j,a='A';
    i=1;
   do
    {
        j=1;
      do
        {
         printf("\t%c",a);
         a++;
         j++;
        }  while(j<=i);

        printf("\n");
        i++;

     } while(i<=5);
return 0;
}
