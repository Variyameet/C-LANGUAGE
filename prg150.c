//tax slab
#include<stdio.h>
int main()
{
 float tax[5],income[5];
 int i;

 for(i=0;i<5;i++)
 {
 printf("Enter the income [%d]: \n",i+1);
 scanf("%f",&income[i]);

 }

 printf("\n\tincome\t\ttax\t");

 for(i=0;i<5;i++)
 {
 if(0<=income[i] && income[i]<=2500)
 {
  tax[i]=tax[i]+(0*(income[i]-0));
  printf("\n\t%f\t%f",income[i],tax[i]);
 }
 else if(2500<income[i] && income[i]<=5000)
  {
  tax[i]=tax[i]+(0.1*(income[i]-2500));
   printf("\n\t%f\t%f",income[i],tax[i]);
  }
 else if(5000<income[i] && income[i]<=10000)
   {
    tax[i]=tax[i]+(0.2*(income[i]-5000));
     printf("\n\t%f\t%f",income[i],tax[i]);
   }
   else
   {
    tax[i]=tax[i]+(0.3*(income[i]-10000));
    printf("\n\t%f\t%f",income[i],tax[i]);
   }
 }

 return 0;
}
