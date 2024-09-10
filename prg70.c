/*      22222
        44444
        66666
        88888
        1010101010
*/

#include<stdio.h>
int main()
{

    int i,j;
    for(i=2;i<=10;i+=2)
    {
        for(j=2;j<=10;j+=2)
        {
            printf("\t%d\t",i);
        }
        printf("\n");

    }
    return 0;

}
