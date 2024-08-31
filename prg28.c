// charges of unites

#include<stdio.h>

int main()
{
	int unit;
	float charg,tcharg;


	printf("enter the unit");
	scanf("%d",&unit);

	if(unit<=100)
		{
		charg=50+(unit*0.60);
		printf("%f",charg);


		}
	else
	{

		if(unit>100 && unit<=300)
		{
		charg=50+(unit*0.80);
		printf("%f",charg);


		}
		else
		{


			charg=50+(unit*0.90);
			printf("%f",charg);
		}
	}

		if(charg>=300)
		{
			tcharg=charg*1.15;
			printf("\n total 15per charg after 300 unit %f",tcharg);
		}




	return 0;
}




