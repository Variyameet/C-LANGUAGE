//concate two string

#include<stdio.h>
int main()
{
    char s1[10],s2[10],s3[20];
    int i,j,k,p;

    printf("enter the string1:");
    scanf("%s",s1);

    printf("enter the string2:");
    scanf("%s",s2);

    for(i=0;s1[i]!='\0';i++);
    //printf("\nlenght is:%d",i);

     for(j=0;s2[j]!='\0';j++);
     //printf("\nlenght is:%d",j);

   for(k=0;k<i;k++)
     {

       s3[k]=s1[k];

     }
     for(p=0;p<i+j;p++)
     {

       s3[p+i]=s2[p];

     }
     printf( "\n marge after :%s\t",s3);

     return 0;
     }


