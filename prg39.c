
// ASCII VALUE , char,type casting
//A-65 Z-97
//  32
//a-97  z-97

#include<stdio.h>
int main()
{
    /*
    char ch='A',ch1='Z',ch2='a';
    int ch3=122;
    printf("\n char : %c -value :%d",ch,ch);
    printf("\n char : %c -value :%d",ch1,ch1);
    printf("\n char : %c -value :%d",ch2,ch2);
    printf("\n char : %c -value :%d",ch3,ch3);
    */
    char ch='A';
     printf("\n char : %c -value :%d",ch,ch);
    printf("\n char : %c -value :%d",ch+25,ch+25);
    printf("\n char : %c -value :%d",ch+32,ch+32);
    printf("\n char : %c -value :%d",ch+25+32,ch+25+32);
    return 0;
}

