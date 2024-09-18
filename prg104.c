//print 1  4  3  16  5  25.. whith do while loops
#include<stdio.h>
int main()
{
int i,total=0;

i=1;
 do {
    if(i%2==0)
    {
          total=i*i;
     printf("%d\t",total);
    }
    else
    {
         printf("%d\t",i);
    }
    i++;
    }while(i<=10);

    return 0;
}
