// total 5*1=5
//       5*2=10
#include<stdio.h>
int main()
{
    int i,total=0,n;
    printf("enter the no");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        total=n*i;
        printf("\n%d * %d = %d \n",n,i,total );

    }
    return 0;
}
