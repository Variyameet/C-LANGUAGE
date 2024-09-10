/*  11111
    33333
    55555
    77777
    99999
*/

#include<stdio.h>
int main()
{

    int i,j;
    for(i=1;i<=10;i+=2)
    {
        for(j=1;j<=10;j+=2)
        {
            printf("\t%d\t",i);
        }
        printf("\n");

    }
    return 0;

}
