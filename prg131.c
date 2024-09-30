//print ...  while.....
/*

    5
    45
    345
    2345
    12345

*/

#include<stdio.h>
int main()
{
    int i,j;
    i=5;
    while(i>=1)
    {
        j=i;
        while(j<=5)
        {
         printf("\t%d",j);

         j++;
        }

        printf("\n");
        i--;

     }
return 0;
}
