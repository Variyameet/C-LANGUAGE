//A C E  G

#include<stdio.h>

int main()
{
    char c;
    char  n;

    printf("enter the char:");
    scanf("%c",&n);

    for(c=64;c<=n;c++)
    {
        if(c%2==1)
        {

        printf("\t %c \t",c);
        }
    }
    return 0;

}
