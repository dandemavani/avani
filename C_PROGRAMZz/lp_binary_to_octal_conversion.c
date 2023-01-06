/*TO CONVERT BINARY TO OCTAL CONVERSION*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int Binary,Temp_1,Temp_2,Decimal,Base,Place,Octal,Remndr,Remndr_1;
	Base = Place = 1;
	Decimal = Octal = 0;
	printf("Enter a Binary number\n");
	scanf("%d",&Binary);
	Temp_1 = Temp_2 = Binary;
	while(Temp_1 > 0)
	{
		Remndr_1 = Temp_1 % 10;
		if(Remndr_1 == 0 || Remndr_1 == 1)
		{
			Temp_1 = Temp_1 / 10;
		}
		else
		{
			printf("Invalid Number\n");
			exit(0);
		}
	}
	while(Binary != 0)
	{
		Remndr = Binary % 10;
		Decimal = Decimal + Remndr * Base;
		Base = Base * 2;
		Binary = Binary / 10;
	}
	while(Decimal != 0)
	{
		Octal = Octal + (Decimal % 8) * Place;
		Decimal = Decimal / 8;
		Place = Place * 10;
	}
	printf("Binary = %d \t Octal = %d\t",Temp_2,Octal);
}
		
			
