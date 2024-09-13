/*
    A
    A B
    A B C
    A B C D
    A B C D E
*/
#include<stdio.h>
int main()
{
    int i,j,ch=65;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %c",ch);
            ch++;
        }

        ch=65;
      printf("\n");
    }
    return 0;
}
