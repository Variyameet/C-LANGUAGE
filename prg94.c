//print -n to n....do while
#include<stdio.h>
int main()
{
int i,n;
printf("enter the no");
scanf("%d",&n);
i=-n;
   do
    {
    printf("%d\t",i);
    i++;
    } while(i<=n);
    return 0;
}
