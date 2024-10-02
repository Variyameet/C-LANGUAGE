//
#include<stdio.h>
int main()
{
   int p[5],q[5],t[5],gst[5],gamo[5],d[5],f[5],i;

   for(i=0;i<5;i++)
   {
    printf("\nenter the price[%d]",i+1);
    scanf("%d",&p[i]);
    printf("\nenter the qty[%d]",i+1);
    scanf("%d",&q[i]);
   }
   printf("\n\tpricr\tqty\tto\tgst\tafto\tdis\tfinalprice\t");
    for(i=0;i<5;i++)
    {
        t[i]=p[i]*q[i];
        gst[i]=t[i]*18/100;
        gamo[i]=t[i]+gst[i];
        d[i]=gamo[i]*10/100;
        f[i]=gamo[i]-d[i];

     printf("\n\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t",p[i],q[i],t[i],gst[i],gamo[i],d[i],f[i]);

    }
return 0;

}
