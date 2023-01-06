/*TO PRINT FACTORS OF A NUMBER USING LOOP*/

#include<stdio.h>
#include<stdlib.h>

void main()
{							//while loop
/*	int Nmbr,Init;
	Init = 1;
	printf("Enter a number\n");
	scanf("%d",&Nmbr);
	printf("Factors of %d: ",Nmbr);
	if(Nmbr < 0)
	{
		printf("Invalid Number\n");
		exit(0);
	}
	else
	{
		while(Init <= Nmbr)
		{
			if(Nmbr % Init == 0)
			{
				printf("%d\t",Init);
			}
			Init++;
		}
	}
*/

						 //do..while loop
	int Nmbr,Init;
	Init = 1;
	printf("Enter a number\n");
	scanf("%d",&Nmbr);
	if(Nmbr < 0)
	{
		printf("Invalid Number\n");
		exit(0);
	}
	else
	{
		printf("Factors of %d: ",Nmbr);
		do
		{
			if(Nmbr % Init == 0)
			{
				printf("%d\t",Init);
			}
			Init++;
		}while(Init <= Nmbr);
	}
}
