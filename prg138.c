/*print with while...loops
 *           *
   *       *
    *   *
      *
    *   *
  *       *
*           *
*/

#include<stdio.h>

int main()
{
    int i,j;
    i=1;
   while(i<=7)
    {
        j=1;
        while(j<=9)
        {
          if(i==j ||i+j==8)
          {
            printf("*");
          }
        else
          {
            printf(" ");
          }
          j++;
        }
        i++;
        printf("\n");
    }

    return 0;
}
