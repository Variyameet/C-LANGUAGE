/*A
b c
D E F
g h i j
K L M N o
*/
#include<stdio.h>
int main()
{
    int i,j,ch=65;
    for(i=1;i<=5;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=i;j++)
            {
            printf(" %c",ch);
            ch++;
            }
        }
        else
        {
             for(j=1;j<=i;j++)
            {
            printf(" %c",ch+32);
            ch++;
            }

        }
        printf("\n");

    }
    return 0;
}
