//print do ... while.....
/*
    5
    44
    333
    2222
    11111

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
         printf("%d",i);
         j--;
        }while(j>=i);

        printf("\n");
        i--;
     }while(i>=1);
return 0;
}
