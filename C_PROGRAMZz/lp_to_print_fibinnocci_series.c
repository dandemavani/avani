/*TO PRINT FIBINOCCI SERIES*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int Lmt,Init,Nmbr_1,Nmbr_2,Temp,Sum;
	Init = 1;
	printf("Enter the Limit\n");
	scanf("%d",&Lmt);
	if(Lmt < 0)
	{
		printf("Invalid Number\n");
		exit(0);
	}
	else
	{
		Nmbr_1 = 0;
		Nmbr_2 = 1;
		printf("Fibinnocci Series From 0 to %d :",Lmt);
		while(Init <= Lmt)
		{
			printf("%d\t",Nmbr_1);
			Sum = Nmbr_1 + Nmbr_2;
			Nmbr_1 = Nmbr_2;
			Nmbr_2 = Sum;
			Init++;
		}
	}
}
