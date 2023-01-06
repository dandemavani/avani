/*TO PRINT PRIME NUMBERS BETWEEN 2 LIMITS*/

#include<stdio.h>

void Prime(int,int);

void main()
{
	int S_Lmt,E_Lmt;
	printf("Enter the starting limit and Ending limit accordingly\n");
	scanf("%d%d",&S_Lmt,&E_Lmt);
	Prime(S_Lmt,E_Lmt);
}
void Prime(int Sl,int El)
{
	int i,j,Count,Temp;
	for(i = Sl; i <= El; i++)
	{
		Count = 0;
		for(j = 1; j <=i; j++)
		{
			if(i % j == 0)
			{
				Count++;
			}
		}
		if(Count == 2)
		{
			printf("%d\t",i);
		}
	}
}
