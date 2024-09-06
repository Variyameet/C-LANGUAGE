// total 2+4+6+....=30
#include<stdio.h>
int main()
{
    int i,total=0;
    for(i=0;i<=10;i+=2)
    {
        printf("%d + ",i);
        total=total+i;
    }
    printf("=%d\n",total);
    return 0;
}
