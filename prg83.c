/*
    a
    b C
    d E f
    g H i J
    k L m N o
*/
#include<stdio.h>
int main()
{
    int i,j,ch=65;
    for(i=1;i<=5;i++)
    {

            for(j=1;j<=i;j++)
            {
            if(j%2==0)
             {
            printf(" %c",ch);
            ch++;

            }
            else{
                printf(" %c",ch+32);
                ch++;
            }

        }
        printf("\n");

    }
    return 0;
}
