/*TO FIND POWER OF ANY NUMBER USING LOOPS*/

#include<stdio.h>

void main()
{									//while loop
/*	int Power,Temp,Nmbr,Expnt;
	Power = 1;
	printf("Enter the Number and Exponent value accordingly\n");
	scanf("%d%d",&Nmbr,&Expnt);
	Temp = Expnt;
	while(Expnt >= 1)
	{
		Power = Power * Nmbr;
		Expnt--;
	}
	printf("Power of %d with %d exponent is %d\n",Nmbr,Temp,Power);
*/

									//do..while loop
	int Power,Nmbr,Temp,Expnt;
	Power = 1;
	printf("Enter Number and exponent accordingly\n");
	scanf("%d%d",&Nmbr,&Expnt);
	Temp = Expnt;
	do
	{
		Power = Power * Nmbr;
		Expnt--;
	}while(Expnt>=1);
	printf("Power of %d with %d exponent is %d\n",Nmbr,Temp,Power); 	
}
