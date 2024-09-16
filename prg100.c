//print total 1,2,3...=55 whith while loops
#include<stdio.h>
int main()
{
int i,total=0;

i=1;
    while(i<=10)
    {
    printf("%d\t",i);

    total=total+i;
      i++;
    }
     printf("=%d\t",total);
    return 0;
}
