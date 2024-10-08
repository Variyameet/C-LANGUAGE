#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i,j;

    printf(" string 1 :");
    scanf("%s",a);

    for(i=0;i<a[i]!='\0';i++);

    if(i%2==1)
    {
        for(j=0;j<i/2;i++)
        {
            if(a[j]!=a[i-j-1])
            {
                printf("string is pelindrom");
            }
        }
    }
    else
    {
        printf("string is not pelindrom");
    }

    return 0;
}
