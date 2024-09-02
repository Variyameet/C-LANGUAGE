//tax slab  
#include<stdio.h> 
int main() 
{ 
 float tax=0,income; 
 printf("Enter the income : \n"); 
 scanf("%f",&income); 
 if(0<=income && income<=2500) 
 { 
  tax=tax+(0*(income-0)); 
  printf("The tax you have to pay will be : %f\n",tax); 
 } 
 else 
 { 
  if(2500<income && income<=5000) 
  { 
   tax=tax+(0.1*(income-2500)); 
   printf("The tax you have to pay will be : %f\n",tax); 
  } 
  else 
  { 
   if(5000<income && income<=10000) 
   { 
    tax=tax+(0.2*(income-5000)); 
    printf("The tax you have to pay will be : %f\n",tax); 
   } 
   else 
   { 
    tax=tax+(0.3*(income-10000)); 
    printf("The tax you have to pay will be : %f\n",tax);  
   }  
  }  
 } 
 
 return 0;  
}