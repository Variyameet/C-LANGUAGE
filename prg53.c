// total 1,2,3... =55
#include<stdio.h>
int main()
{
    int i,total=0;
    for(i=1;i<=10;i++)
    {
        printf("%d + ",i);
        
        total=total+i;
    }
    printf("=%d\n",total);
    return 0;
}
