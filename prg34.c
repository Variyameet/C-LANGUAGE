//  elseif

#include<stdio.h>

int main()
{
	int a=10,b=20,c=30;

	if(a>b &&  a>c)
	{
		printf("a is max");
	}
	else if(b>c)
	{
		printf("b is max");
	}
	else
	{
		printf("c is max");
	}
	return 0;
}

