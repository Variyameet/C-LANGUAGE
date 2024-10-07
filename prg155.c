/*print     1 2 3   1                               2 3                     4
            4 5 6     5                               6                     7 8
            7 8 9       9 diagonal total(15)        uper traingle(11)       lower traingle(19)
*/

#include<stdio.h>
int main()
{
    int i,j,a[3][3],d=0,ans=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the arry[%d][%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
        printf("\n");

    }
 /*   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                ans=ans+a[i][j];
            }

        }
    }*/
     for(i=2;i<0;i--)
    {
        for(j=i;j<1;j--)
        {
            ans=ans+a[i][j];
        }
    }
    printf("ans of daigol :%d",ans);
}

