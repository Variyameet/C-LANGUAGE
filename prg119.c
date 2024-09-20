/*print  whith   while loops
  ABCDE
  FGHIJ
  KLMNO
  PQRST
  UVWXY
*/
#include<stdio.h>
int main()
{
int i,j,a=65;

i=1;

while(i<=5)
  { j=1;
  while(j<=5)
    {
        printf("\t%c",a);
        j++;
        a++;
    }
    printf("\n");
    i++;
  }


    return 0;
}
