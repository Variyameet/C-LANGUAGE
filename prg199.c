//Write a c language function that reverse a number.
// Example x = 32243;
// Expected Output : 34223

#include<stdio.h>
void doReverse()
{
    int no=32243,temp=0,i;

    for(i=1;i<=5;i++)
    {
        temp=no%10;
        printf("%d",temp);
        no=no/10;
    }
}
int main()
{
    void doReverse();

    doReverse();

    return 0;
}



