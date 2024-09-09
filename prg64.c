//A c E g......
#include<stdio.h>
int main()
{
    int i,t=0;
    char c='A';
    for(i=0;i<=13;i++)
    {
        if(t==0)
        {
            printf("%c\t",c);
            t=1;
        }
        else
        {
            c=c+32;
            printf("\t%c\t",c);
            c=c-32;
            t=0;
        }
        c=c+2;
    }
    return 0;
}
