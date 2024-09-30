//print ... while.....
/*

    A
    AB
    ABC
    ABCD
    ABCDE

*/

#include<stdio.h>
int main()
{
    int i,j,a='A';
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
         printf("\t%c",a);
         a++;
         j++;
        }

        printf("\n");
        i++;
        a=65;
     }
return 0;
}
