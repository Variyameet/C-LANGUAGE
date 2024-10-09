
//NRNP:-no return with peramiter


#include<stdio.h>

void doSum(int a,int b)//function defination
{

    printf("sum of:%d",a+b);
}
int main()
{

     int a,b;
    void dosum(int,int);//function declaration


    printf("enter the a:");
    scanf("%d",&a);
    printf("enter the b:");
    scanf("%d",&b);
    doSum(a,b);//function calling

    return 0;
}
