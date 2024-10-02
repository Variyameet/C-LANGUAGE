/*
    a   b   a+b
    11  21  32
    12  22  34
    13  23  36
    14  24  38
    15  25  40
*/

#include<stdio.h>
int main()
{
    int a[5],b[5],to[5],i;

    for(i=0;i<5;i++)
    {
        printf(" \n entr the a[%d] :",i+1);
        scanf("%d",&a[i]);
    }
     for(i=0;i<5;i++)
    {
        printf(" \n entr the b[%d] :",i+1);
        scanf("%d",&b[i]);
    }
    printf("\n a\tb\ta+b");
      for(i=0;i<5;i++)
    {
        printf(" \n%d\t%d\t%d\t",a[i],b[i],a[i]+b[i]);

    }

    return 0;
}

