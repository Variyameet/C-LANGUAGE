//grade to marks of student with the arry

#include<stdio.h>

int main()
{

	int s[5],m1[5],m2[5],m3[5],i;
	float total[5],per[5];

    for(i=0;i<5;i++)
    {
	printf("enter the student");
	scanf("%d",&s[i]);
    printf("enter the sub1");
	scanf("%d",&m1[i]);
    printf("enter the sub2");
	scanf("%d",&m2[i]);
    printf("enter the sub3");
	scanf("%d",&m3[i]);
    }
    printf("\n\tstudent\tmarks1\tmarks2\tmarks3\ttotal\t\tper\t\tgrade\t");
    for(i=0;i<5;i++)
    {
	total[i]=m1[i]+m2[i]+m3[i];
	printf("\n\t%d\t%d\t%d\t%d\t%f",i+1,m1[i],m2[i],m3[i],total[i]);
	per[i]=total[i]/300*100;
	printf("\t%f",per[i]);

	if(per[i]>=75)
	{
		printf("\tA");
	}
	else if(per[i]>=60 && per[i]<75)
		{
			printf("\tB");
		}
	else if(per[i]>=45 && per[i]<60)
		{
			printf("\tc");
		}
	else if(per[i]>35 && per[i]<=45)
	    {
			printf("\tD");
		}
	else
		{
			printf("\tfail");

		}
    }
	return 0;
}
