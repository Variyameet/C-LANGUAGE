
//WRWP:-with return with peramiter


#include<stdio.h>

int doSum(int a,int b)//function defination
{

    return a+b;
}
int main()
{

     int a,b;
    int dosum(int,int);//function declaration


    printf("enter the a:");
    scanf("%d",&a);
    printf("enter the b:");
    scanf("%d",&b);
    //doSum(a,b);//function calling
    printf("sum of:%d",doSum(a,b));

    return 0;
}
