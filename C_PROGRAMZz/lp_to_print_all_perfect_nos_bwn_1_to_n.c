/*TO PRINT ALL PERFECT NUMBERS FROM 1 TO N*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int S_Lmt,L_Lmt,Sum,Value,Init;
	S_Lmt = 1;
	printf("Enter the last limit\n");
	scanf("%d",&L_Lmt);
	if(L_Lmt < 0)
	{
		printf("Invalid Number\n");
		exit(0);
	}
	else
	{
		printf("Perfect Numbers in between %d and %d is:",S_Lmt,L_Lmt);
		while(L_Lmt >= S_Lmt)
		{
			Value = L_Lmt;
			Init = 1;
			Sum = 0;
			while(Init < Value)
			{
				if(Value % Init == 0)
				{
					Sum = Sum + Init;
				}
				Init++;
			}
			if(Sum == L_Lmt)
			{
				printf("%d\t",L_Lmt);
			}
			L_Lmt--;
		}
		printf("\n");
	}
}


