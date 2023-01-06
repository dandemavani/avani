/*TO READ AND DISPLAY TEMPERATURE IN 2 CITIES FOR 1 WEEK*/

#include<stdio.h>
#define city 2
#define week 7

void main()
{
	int Temperature[city][week],i,j;
        printf("Enter elements to city_1\n");
	for(i=0;i<city;i++)
	{
		for(j=0;j<week;j++)
		{
			printf("City[%d],Week[%d] = ",i+1,j+1);
			scanf(" %d",&Temperature[i][j]);
		}
		printf("\n");
	}
	printf("\nEntered array elements\n");\
	for(i=0;i<city;i++)
	{
		for(j=0;j<week;j++)
		{
			printf("City[%d],Week[%d] = %d\n",i+1,j+1,Temperature[i][j]);
		}
		printf("\n\n");
	}
}	
