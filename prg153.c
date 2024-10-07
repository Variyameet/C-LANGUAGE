/* print
    1 2 3       1 2 3
    4 5 6       4 5 6
    7 8 9       7 8 9

*/

#include<stdio.h>
int main()
{
    int arr[5][5], arr1[5][5],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the arr[%d][%d]:",i+1,j+1);
            scanf("%d",&arr[i][j]);


        }
    }
      for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
             {
                        printf("enter the arr1[%d][%d]:",i+1,j+1);
                scanf("%d",&arr1[i][j]);
            }
        }

     /*  for(i=0;i<3;i++)
        {
         for(j=0;j<3;j++)
             {
                   printf("\t%d",arr[i][j]);
             }
             printf("\t");

         for(j=0;j<3;j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");

    }*/
        for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("\t%d",arr[i][j]+arr1[i][j]);
        }
        printf("\n");
    }



    return 0;
}
