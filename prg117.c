/*print  whith   while loops
    1 1 1 1 1
    3 3 3 3 3
    5 5 5 5 5
    7 7 7 7 7
    9 9 9 9 9
*/
#include<stdio.h>
int main()
{
int i,j;

i=1;
while(i<=10)

  { j=1;
    while(j<=10)
    {
        printf("\t%d",i);
        j=j+2;
    }
    printf("\n");
    i=i+2;
  }


    return 0;
}
