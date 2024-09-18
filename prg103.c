//print 1  4  9  16  25.... whith    while loops
#include<stdio.h>
int main()
{
int i,total=0;

i=1;
  while(i<=5) {

    total=i*i;
     printf("%d\t",total);
    i++;
    }

    return 0;
}
