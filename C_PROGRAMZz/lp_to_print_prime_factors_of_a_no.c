/*TO PRINT PRIME FACTORS OF A NUMBER*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int Nmbr,Count,Init,Values,Temp;
	Init = 1;
	printf("Enter the Number\n");
	scanf("%d",&Nmbr);
	if(Nmbr < 0)
	{
		printf("Invalid Number\n");
		exit(0);
	}
	else
	{
		while(Init <= Nmbr)
		{
			if(Nmbr % Init == 0)
			{
				//printf("%d\t",Init);
				Temp = Init;
				Values = 1;
				Count = 0;
				while(Values <= Temp)
				{
					if(Temp % Values == 0)
					{
						Count++;
					}
					Values++;
				}
				if(Count == 2)
				{
					printf("%d\t",Temp);
				}
			}
			Init++;
		}
	}
}

