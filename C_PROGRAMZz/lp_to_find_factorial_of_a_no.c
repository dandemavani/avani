/*TO FIND FACTORIAL OF A NUMBER*/

#include<stdio.h>
#include<stdlib.h>

void main()
{								//while loop
/*	int Nmbr,Temp,Factorial;
	Factorial = 1;
	printf("Enter the number whose factorial want to be findout\n");
	scanf("%d",&Nmbr);
	if(Nmbr < 0)
	{
		printf("No Factorial for Negative Numbers\n");
		exit(0);
	}
	else
	{
		Temp = Nmbr;
		while(Nmbr >= 1)
		{
			Factorial = Factorial * Nmbr;
			Nmbr--;
		}
		printf("Factorial of %d is %d\n",Temp,Factorial);
	}
*/

	int Nmbr,Factorial,Temp;
	Factorial = 1;
	printf("Enter a number whose Factorial want to findout\n");
	scanf("%d",&Nmbr);
	if(Nmbr < 0)
	{
		printf("No Factorial for Negative Numbers\n");
		exit(0);
	}
	else
	{
		Temp = Nmbr;
		do
		{
			Factorial = Factorial * Nmbr;
			Nmbr--;
		}while(Nmbr >= 1);
		printf("Factorial of %d is %d\n",Temp,Factorial);
	}
		
}
