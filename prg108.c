//print fibonaci.... whith do   while loops
#include<stdio.h>
int main()
{
int i,n3,n2=1,n1=0;


i=1;
  do {
    n3=n1+n2;
    printf("%d \t",n3);
    n1=n2;
    n2=n3;
    i++;

    } while(i<=10);

    return 0;
}
