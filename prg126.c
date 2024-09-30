//print do ... while.....
/*
    5
    54
    543
    5432
    54321

*/

#include<stdio.h>
int main()
{
    int i,j;
    i=5;
    do
    {
        j=5;
        do
        {
         printf("%d",j);
         j--;
        }while(j>=i);

        printf("\n");
        i--;
     }while(i>=1);
return 0;
}
