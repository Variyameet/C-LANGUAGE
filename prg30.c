//calculate the salary

#include<stdio.h>

int main()
{
	float sal,totlsal,hra,da;

	printf("enter the sal");
	scanf("%f",&sal);

	if( sal<5000)
	{
		hra=sal*8/100;
		da=sal*20/100;
		totlsal=sal+hra+da;

		printf("totle salary :%f",totlsal);
	}
	else
	{

		if(sal<=5000 && sal<10000)
		{
			hra=sal*12/100;
			da=sal*30/100;
			totlsal=sal+hra+da;

			printf("totle salary :%f",totlsal);
		}
		else
		{
			if(sal<=10000 && sal<15000)
			{
				hra=sal*15/100;
				da=sal*40/100;
				totlsal=sal+hra+da;

				printf("totle salary :%f",totlsal);
			}
			else
			{
				//if( sal>=15000)
				//{
				hra=sal*20/100;
				da=sal*50/100;
				totlsal=sal+hra+da;

				printf("totle salary :%f",totlsal);
				//}
			}
		}
	}
		return 0;
}
