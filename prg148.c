// print electricity with arry
#include<stdio.h>

int main()
{
	int unit[5],i;
	float charg[5],tcharg[5];

    for(i=0;i<5;i++)
    {
	printf("\nenter the unit");
	scanf("%d",&unit[i]);
    }
    printf("\n\tunits\tcharg\t\ttocharg\t");

     for(i=0;i<5;i++)
     {
	if(unit[i]<=100)
		{
		charg[i]=50+(unit[i]*0.60);
		printf("\n\t%d\t%f\t",unit[i],charg[i]);
		}
     	else if(unit[i]>100 && unit[i]<=300)
		{
		charg[i]=50+(unit[i]*0.80);
		printf("\n\t%d\t%f\t",unit[i],charg[i]);
		}
		else
		{
	     	charg[i]=50+(unit[i]*0.90);
			printf("\n\t%d\t%f\t",unit[i],charg[i]);
		}


		if(charg[i]>=300)
		{
			tcharg[i]=charg[i]*1.15;
			printf("\t%f",tcharg[i]);
		}

     }
	return 0;
}
