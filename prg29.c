// check user is avilable for voat or not

#include<stdio.h>

int main()
{
	int age;

	printf("enter the age");
	scanf("%d",&age);

	if(age>=18)
	{
		printf("eligible for voat");
	}
	else
	{
		printf("not eligible for voat");
	}
	return 0;
}
