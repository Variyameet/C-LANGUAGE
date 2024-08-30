//user input and address

#include<stdio.h>

int main()
{

	int a,b;

	printf("enter the a ");
	scanf("%d",&a);
	printf("enter the b ");
	scanf("%d",&b);

	printf("\n value of a : %d\tb :%d",a,b);
	printf("\n sizeof int %d",sizeof(int));

	printf("\n address:a %u\tb:%u",&a,&b);

	printf("enter the a and b");
	scanf("%d%d",&a,&b);

	printf("\n value of a : %d\tb :%d",a,b);
	printf("\n address:a %u\tb:%u",&a,&b);

	return 0;
}

