//check number positive ,nagitive or 0

#include<stdio.h>

int main()
{
	int num;

	printf("enter the num");
	scanf("%d",&num);

	if(num>=0)
	{
		if(num==0)
		{
			printf("num is zero");
		}
		else
		{
			printf("num is positive");
		}
	}
	else
	{
		printf("num is nagative");
	}

	return 0;
}
