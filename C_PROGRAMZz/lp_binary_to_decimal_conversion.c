/*TO CONVERT BINARY TO DECIMAL CONVERSION*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int Binary,Base,Temp_1,Temp_2,Decimal,Remndr_1,Remndr_2;
	printf("Enter a Binary Number\n");
	scanf("%d",&Binary);
	Temp_1 = Temp_2 = Binary;
	while(Temp_1 != 0)
	{
		Remndr_1 = Temp_1 % 10;
		if(Remndr_1 == 0 || Remndr_1 == 1)
		{
			Temp_1 = Temp_1 / 10;
		}
		else
		{
			printf("It's not a Binary Number\n");
		       	exit(0);
		}
	}
	Base = 1;
	Decimal = 0;
	while(Binary != 0)
	{
		Remndr_2 = Binary % 10;
		Decimal = Decimal + (Remndr_2 * Base);
		Base = Base * 2;
		Binary = Binary / 10;
	}
	printf("Binary = %d \t Decimal = %d \n",Temp_2,Decimal);
}

		

