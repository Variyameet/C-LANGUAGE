// enter char transfer to small or capital

#include<stdio.h>

int main()
{
    char ch;
    printf("enter the charcter");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
    {
        printf("ans is %c\n",ch+32);
    }
    else if(ch>97 && ch<=122)
    {
        printf("ans is %c\n",ch-32);

    }
    return 0;
}
