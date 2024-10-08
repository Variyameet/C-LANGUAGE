/*
check program is palindrom or not

logic: step1: enter the string : mom
       step2: reverce string1 and store in string 2
       step3:compare the string1 and string 2
*/
#include<stdio.h>
int main()

{
    char a[10],b[10];
    int i,j,k=0,p,l=0;

    printf(" string 1 :");
    scanf("%s",a);

    for(i=0;i<a[i]!='\0';i++);

    for(j=i-1;j>=0;j--)
    {
       b[k]=a[j];
       k++;
    }
    b[k]='\0';
    printf(" string 2: %s ",b);

    for(p=0;p<=i;p++)
    {
     if(a[p]==b[p] )
     {
        l++;
     }

    }

       if(l-1==i)
            {
                printf("\nstring is pelindrom ");

            }
            else
            {
                printf("\nstring is not pelindrom");
            }

    return 0;
}
