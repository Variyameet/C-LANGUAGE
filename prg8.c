//simple intrest

#include<stdio.h>
int main()

{
	int p,r,n,si;

	printf("enter the value ");
	scanf("%d",&p);

	printf("enter the rate of interst");
	scanf("%d",&r);

	printf("enter the month");
	scanf("%d",&n);

	si=(p*r*n)/100;
	printf("\n amount intrest is =%d",si);

	return 0;
}
	