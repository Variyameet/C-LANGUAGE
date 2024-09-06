// total 1,3,5 =25
#include<stdio.h>
int main()
{
    int i,total=0;
    for(i=1;i<=10;i+=2)
    {
        printf("%d + ",i);
        total=total+i;
    }
    printf("=%d\n",total);
    return 0;
}
