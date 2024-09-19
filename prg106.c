//print 1  4  12  32  80. whith do   while loops
#include<stdio.h>
int main()
{
int i,total=0,j=1;


i=1;
  do {
    total=j*i;
    printf("%d \t",total);
    i*=2;
    j++;

    } while(i<=10);

    return 0;
}
