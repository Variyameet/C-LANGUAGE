/*  1.arry total
    2.even value total
    3.odd value total
    4.even potiton total
    5.odd potition total
*/
#include<stdio.h>
int main()
{
    int i,a[10],t=0,e=0,o=0,ev=0,od=0;

    for(i=0;i<10;i++)
    {
        printf("\n enter the  a[%d]",i+1);
        scanf("%d",&a[i]);
    }


      for(i=0;i<10;i++)
    {
        t=t+a[i];
        if(a[i]%2==0)
        {
         e=e+a[i];
        }
        else
        {
            o=o+a[i];
        }

       if(i%2==0)
       {
         ev=ev+a[i];
       }
       else
       {
         od=od+a[i];
      }

    }
     printf("\n total %d:",t);
     printf("\n total of even  no: %d",e);
     printf("\n total of odd  no: %d",o);


  /*  for(i=0;i<10;i+=2)
    {
        ev=ev+a[i];

    }
     for(i=1;i<10;i+=2)
    {
        od=od+a[i];

    }*/

     printf("\n total of even potition no: %d",ev);
     printf("\n total of odd potition no: %d",od);

     return 0;
}
