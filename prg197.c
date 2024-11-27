#include<stdio.h>
void pattern(int n)
{
    int i,j,sp=10;
    for(i=1;i<n;i++)
    {
        for(j=0;j<sp;j++)
        printf(" ");
        for(j=1;j<i*2;j++)
        {
            printf("*");
        }
        printf("\n");
        sp--;
    }
}
int main()
{
    pattern(3);
    pattern(5);
    pattern(7);
    return 0;
}
