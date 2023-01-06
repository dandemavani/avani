/*TO CHECK NUMBER IS STRONG NUMBER OR NOT*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int Nmbr,Fact,Sum,Init,Temp,Remndr;
	Init = 1;
	Sum = 0;
	printf("Enter a number\n");
	scanf("%d",&Nmbr);
	if(Nmbr < 0)
	{
		printf("Invalid Number\n");
		exit(0);
	}
	else
	{
		Temp = Nmbr;
		while(Nmbr != 0)
		{
			Fact = 1;
			Remndr = Nmbr % 10;
			while(Remndr > 0)
			{
				Fact = Fact * Remndr;
				Remndr--;
			}
			Sum = Sum + Fact;
			Nmbr = Nmbr / 10;
		}
		if(Temp == Sum)
		{
			printf("%d is a Strong Number\n",Temp);
		}
		else
		{
			printf("%d is not a Strong Number\n",Temp);
		}
	}
}
