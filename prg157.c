/*
    string:start with 0 and end with '\0'
    '\0' is null charecter

*/
#include<stdio.h>
int main()
{
    char s[10];
    int i,ans=0;

    printf("enter the string:");
    scanf("%s",s);
     printf("\n str1 :%s",s);

     for(i=0;s[i]!='\0';i++);

     printf("\nlenght is:%d",i);


    return 0;
}
