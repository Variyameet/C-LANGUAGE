//print 5*1=5   5*2=10   5*3=15. whith do   while loops
#include<stdio.h>
int main()
{
int i,total=0,n;

printf("entr the n ");
scanf("%d",&n);
i=1;
  do {
    total=n*i;
    printf("%d * %d=%d\n",n,i,total);
    i++;

    } while(i<=10);

    return 0;
}
