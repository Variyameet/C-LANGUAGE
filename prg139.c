/*print with  do... while...loops
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
   do
    {
        j=1;
        do
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
        }while(j<=9);
        i++;
        printf("\n");
    } while(i<=7);

    return 0;
}
