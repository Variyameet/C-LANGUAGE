//condition check

#include<stdio.h>

int main()
{
	int x,y;

	printf("enter the x");
	scanf("%d",&x);
	printf("enter the y");
	scanf("%d",&y);

	if(x<2000 || x>3000)
	{
		printf("\nx ");
	}
	if(y>=100 && y<=500)
	{
		printf("\ny");
	}
	return 0;
}
	