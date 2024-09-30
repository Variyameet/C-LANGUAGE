//print ..do    while.....
/* the row is capital

 A
 b c
 D E F
 g h i j
 K L M N O

*/

#include<stdio.h>
int main()
{
    int i,j,a='A';
    i=1;
   do
    {
        j=1;
        if(i%2==1)
        {
            do
            {
                printf("\t%c",a);
                a++;
                j++;
             }while(j<=i);

        }
        else
        {
            do
            {
                printf("\t%c",a+32);
                a++;
                j++;
             }while(j<=i);

        }

        printf("\n");
        i++;

     } while(i<=5);
return 0;
}
