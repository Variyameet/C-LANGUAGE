//print 1 to n whith do while
#include<stdio.h>
int main()
{
int i,n;
printf("enter the no");
scanf("%d",&n);
i=1;
   do
    {
    printf("%d\t",i);
    i++;
    } while(i<=n);
    return 0;
}
