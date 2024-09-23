//print ... while.....
/*
    1
    22
    333
    4444
    55555

*/

#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
         printf("%d",i);
         j++;
        }

        printf("\n");
        i++;
     }
return 0;
}
