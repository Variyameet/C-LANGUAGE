// arry

#include<stdio.h>
int main()
{
    int arr[5],i;
    //printf("\n size of arry :%d",sizeof(arr));

    for(i=0;i<5;i++)
    {
        printf("\nentr arr[%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
      for(i=0;i<5;i++)
    {
        printf("\n arr[%d] : %d -address: %u\n",i+1,arr[i],&arr[i]);

    }
    return 0;
}
