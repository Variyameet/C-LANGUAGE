//print ... while.....
/*
    1
    23
    456
    78910
    1112131415

*/

#include<stdio.h>
int main()
{
    int i,j,a=1;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
         printf("\t%d",a);
         a++;
         j++;
        }

        printf("\n");
        i++;
     }
return 0;
}
