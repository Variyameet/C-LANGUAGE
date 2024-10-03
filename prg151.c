/*
    print   a=11 12 13 14 15  b=21 22 23 24 25 ans= 11 12 13 14 15 21 22 23 24 25(murge)

    print   a=11 12 13 14 15  b=21 22 23 24 25 ans=  21 22 23 24 25 11 12 13 14 15(murge)

    print   a=11 12 13 14 15  b=21 22 23 24 25 ans= 11 21 12 22 13 23 14 24 15 25(murge)

*/
#include<stdio.h>

int main()
{
    int a[5]={11,12,13,14,15},b[5]={21,22,23,24,25},c[10],i,f=0,t=0;

    for(i=0;i<10;i++)
    {
      if(i%2==0)
      {
        c[i]=a[f];
        f++;
      }
       else
      {
        c[i]=b[t];
        t++;
      }
    }
      for(i=0;i<10;i++)
    {
        printf("%d,",c[i]);

    }

    /*   for(i=0;i<5;i++)
    {
           c[i]=a[i];
           c[5+i]=b[i];

    }
      for(i=0;i<10;i++)
    {
        printf("%d,",c[i]);

    }

        for(i=0;i<5;i++)
    {
           c[i]=b[i];
           c[5+i]=a[i];

    }
       for(i=0;i<10;i++)
    {
        printf("%d,",c[i]);

    } */
    return 0;
    }
