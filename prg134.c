
/*
       *
      ***
     *****
    *******
   *********



*/
#include<stdio.h>
int main()
{
    int i,j,sp=10;
    for(i=1;i<=10;i+=2)
    {
        for(j=1;j<=sp;j++)

        printf(" ");

        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        sp--;
    printf("\n");
    }
    return 0;

}
