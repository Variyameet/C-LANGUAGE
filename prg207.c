// pointer to 2d arry

#include<stdio.h>

int main()
{
    int a[2][2],i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter the arry [%d][%d]",i+1,j+1);
            scanf("%d",&a[i][j]);

        }
        printf("\n");
    }

    int *ptr;

    ptr=&a;

    printf("size of :%d",sizeof(ptr));
     printf("\nsize of :%d",sizeof(a));
        int c=0;
         for(i=0;i<2;i++)
         {
            for(j=0;j<2;j++)
            {
             printf("\n %d - %u - %d - %u  ",a[i][j],&a[i][j],*ptr+c,ptr+c);
             c++;
             }
             printf("\n");
         }

    return 0;

}
