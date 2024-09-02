//grade to marks of student

#include<stdio.h>

int main()
{

	int s1,s2,s3;
	float total,per;

	printf("enter the sub1 marks");
	scanf("%d",&s1);

	printf("enter the sub2 marks");
	scanf("%d",&s2);

	printf("enter the sub3 marks");
	scanf("%d",&s3);

	total=s1+s2+s3;
	printf("\ntotal of marks is%f",total);
	per=total/300*100;
	printf("\npersentage :%f",per);

	if(per>75)
	{
		printf("\nA grade");
	}
	else
	{
		if(per>60 && per<=75)
		{
			printf("\nB grade");
		}
		else
		{
			if(per>60 && per<=45)
			{
				printf("\nc grade");
			}
			else
			{
				if(per>45 && per<=35)
				{
					printf("\nD grade");
				}
				else
				{
					//if(per<35)
					//{
					printf("\nfail");
					//}
				}
			}
		}
	}
	return 0;
}
	