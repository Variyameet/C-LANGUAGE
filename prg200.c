#include<stdio.h>

void perfect()
{
    int no=6,i,temp=0;

    for(i=1;i<6/2;i++)
    {
        if(no%i==0)
        {
            temp=temp+i;
            printf("+%d",temp);
        }


    }
    printf("ans is:%d",temp);

}
int main()
{
    void perfect();

    perfect();
    return 0;

}
