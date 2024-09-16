//print A to Z.. whith number like A-65 B-66...  do   while loops
#include<stdio.h>
int main()
{
int i;

i=65;
do
{
    printf("%c %d\n",i,i);
    i++;
    }while(i<=90);
    return 0;
}
