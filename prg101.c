//print 2  6  8   =30.... whith    while loops
#include<stdio.h>
int main()
{
int i,total=0;

i=0;
  while(i<=10) {
    printf("%d\t",i);
    total=total+i;
    i+=2;
    }
    printf("=%d",total);
    return 0;
}
