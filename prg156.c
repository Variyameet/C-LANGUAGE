/*  char 'h','e','l','l','o'
    string "hello"
*/
#include<stdio.h>
int main()
{
    //char str[]={"hello"};//char str[5]={"hello"};
    //printf("\n %s",str);

    char str1;//str1[15];
    printf("enter the string :");
    //scanf("%s",str1);
    //scanf("%[^\n]",str1);
    gets(str1);
    //puts(str1);
    printf("\n str1 :%s",str1);

    return 0;

}
