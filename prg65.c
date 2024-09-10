//for loops.. patten
/*       ***
         ***
         ***
         ***
*/

#include<stdio.h>
 int main()
 {
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("*");
        }
    printf("\n");
    }
    return 0;
 }

 /*           i<=4            j<=3            j++

    i=1         1<=4    j=1     1<=3    *       2
                                2<=3    *       3
                                3<=3    *       4
                                4<=3    f
                2<=4    j=1     1<=3    *       2
                                2<=3    *       3
                                3<=3    *       4
                                4<=3    f
*/
