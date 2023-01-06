
#include<stdio.h>

void main()
{
/*	int Nmbr,Init,Count;
	Count = 0;
	printf("Enter a number you want to check\n");
	scanf("%d",&Nmbr);
	for(Init = 1;  Init <= Nmbr; Init++)
	{
		if(Nmbr % Init == 0)
		{
			Count++;
		}
	}
	if(Count == 2)
	{
		printf("%d is a Prime Number\n",Nmbr);
	}
	else
	{
		printf("%d is not a Prime Number\n",Nmbr);
	}


*/






			/*TO PRINT N PRIME NUMBERS*/	
/*	int Lmt,Nmbr,I,J,Temp,Cnt,Flag;
	Flag = Cnt =0;
	printf("Enter the number of prime numbers you want to print\n");
	scanf("%d",&Lmt);
	Nmbr = 2;
	while(Flag <= Lmt)
	{		
			Temp = Nmbr;
			Cnt = 0;
			for(J = 1;  J <= Temp;  J++)
			{
				if(Temp % J == 0)
				{
					Cnt++;
				}
			}
		 	if(Cnt == 2)
			{
				printf("%d\t",Temp);
				Flag++;
			}
			Nmbr++;

		if(Flag == Lmt)
		{
			break;
		}
	}	
*/


	/*TO PRINT UPTO N PRIME NUMBERS*/

/*	int Lmt,Count,I,J,Temp;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	printf("Prime Number Upto %d is :",Lmt);
	for(I = 1;  I <= Lmt;  I++)
	{
		Temp = I;
		Count = 0;
		for(J = 1; J <= Temp;J++)
		{
			if(Temp % J == 0)
			{
				Count++;
			}
		}
		if(Count == 2)
		{
			printf("%d\t",Temp);
		}
	}
*/


		/*PRINT PRIME NUMBERS BETWEEN TWO RANGES*/
	int S_Lmt,L_Lmt,I,Count,Temp,J;
	Count = 0;
	printf("Enter the Starting Limit and Ending Limit\n");
	scanf("%d%d",&S_Lmt,&L_Lmt);
	printf("Prime Numbers between %d and %d is as follows:",S_Lmt,L_Lmt);
	for(I = S_Lmt;  I <= L_Lmt;  I++)
	{
		Temp = I;
		Count = 0;
		for(J = 1; J <= Temp;  J++)
		{
			if(Temp % J == 0)
			{
				Count++;
			}
		}
		if(Count == 2)
		{
			printf("%d\t",Temp);
		}
	}
	
}
