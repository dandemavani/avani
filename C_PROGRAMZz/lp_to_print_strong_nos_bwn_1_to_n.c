/*TO CHECK STRONG NUMBERS BETWEEN 1TO N*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int L_Lmt,S_Lmt,Fact,Sum,Value,Remndr;
	S_Lmt = 1;
	printf("Enter the limit\n");
	scanf("%d",&L_Lmt);
	if(L_Lmt < 0)
	{
		printf("Invalid Number\n");
		exit(0);
	}
	else
	{
		while(L_Lmt >= S_Lmt)
		{
			Value = L_Lmt;
			Sum = 0;
			while(Value != 0)
			{
				Remndr = Value % 10;
				Fact = 1;
				while(Remndr > 0)
				{
					Fact = Fact * Remndr;
					Remndr--;
				}
				Sum = Sum + Fact;
				Value = Value / 10;
				if(Sum == L_Lmt)
				{
					printf("%d\t",L_Lmt);
				}
			}
			L_Lmt--;
		}
		printf("\n");
	}
}
