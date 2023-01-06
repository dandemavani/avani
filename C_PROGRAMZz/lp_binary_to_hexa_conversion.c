/*TO CONVERT BINARY TO HEXA-DECIMAL*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int Binary,Temp_1,Temp_2,Decimal,Hexa,Base,Place,Remndr_1,Remndr_2,Remndr_3;
	printf("Enter a Binary Number\n");
	scanf("%d",&Binary);
	Temp_1 = Temp_2 = Binary;
	while(Binary != 0)
	{
		Remndr_1 = Binary % 10;
		if(Remndr_1 == 0 || Remndr_1 == 1)
		{
			Binary = Binary / 10;
		}
		else
		{
			printf("It's not a Binary Number\n");
			exit(0);
		}
	}
	Base = 1;
	Decimal = 0;
	while(Temp_1 != 0)
	{
		Remndr_2 = Temp_1 % 10;
		Decimal = Decimal + (Remndr_2 * Base);
		Base = Base * 2;
		Temp_1 = Temp_1 / 10;
	}
	Hexa = 0;
	Place = 1;
	while(Decimal != 0)
	{
		Remndr_3 = Decimal % 16;
		Hexa = Hexa + (Remndr_3 * Place);
		Place = Place * 10;
		Decimal = Decimal / 16;
	}
	printf("Binary = %d \t Hexa_Decimal = %d\n",Temp_2,Hexa);
}

