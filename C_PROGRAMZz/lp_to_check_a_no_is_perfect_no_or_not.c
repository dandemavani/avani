/*TO CHECK WHETHER A NUMBER IS PERFECT OR NOT*/
#include<stdio.h>
#include<stdlib.h>

void main()
{									//while loop
/*	int Nmbr,Sum,Init;
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
		while(Init < Nmbr)
		{
			if(Nmbr % Init == 0)
			{
				Sum = Sum + Init;
			}
			Init++;
		}
		if(Sum == Nmbr)
		{
			printf("%d is a Perfect Number\n",Nmbr);
		}
		else
		{
			printf("%d is not a Perfect Number\n",Nmbr);
		}
	}
*/

	int Nmbr,Sum,Init;
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
		do
		{
			if(Nmbr % Init == 0)
			{
				Sum = Sum + Init;
			}
			Init++;
		}while(Init < Nmbr);
		if(Sum == Nmbr)
		{
			printf("%d is a Perfect Number\n",Sum);
		}
		else
		{
			printf("%d is not a Perfect Number\n",Sum);
		}
	}
}	
