//print price qty totalprice gst gstprice discount finalprice
#include<stdio.h>
int main()
{
    int price,qty,to=0,afto=0,gst,dis,f=0;

    printf(" \nproduct price");
    scanf("%d",&price);
    printf("\n product qty");
    scanf("%d",&qty);

    to=price*qty;
    //printf("\ntprice:%d",to);

    gst=to*18/100;
    // printf("\ngstamount:%d",gst);

    afto=gst+to;

    dis=afto*10/100;

    f=afto-dis;
   //  printf("\n discount:%d",dis );

   printf("\n\tpricr\tqty\tto\tgst\tafto\tdis\tf\t");
   printf("\n\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t",price,qty,to,gst,afto,dis,f);

     return 0;
}
