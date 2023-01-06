/*TO PRINT ASCII CHARACTORS WITH THEIR VALUES*/

#include<stdio.h>
#include<stdlib.h>

void main()
{								//while loop
/*	int Chtr;
	Chtr = 0;
	while(Chtr < 256)
	{
		printf("%d - %c\n",Chtr,Chtr);
		Chtr++;
	}
	exit(0);
*/

								//do..while loop
	int Chtr;
	Chtr = 0;
	do
	{
		printf("%d \t %c \n",Chtr,Chtr);
		Chtr++;
	}while(Chtr < 256);

}
