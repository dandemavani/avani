/*TO CHECK NUMBER IS PRIME OR NOT*/

#include<stdio.h>
#include<stdlib.h>

void main()
{									//while loop
/*	int Nmbr,Count,Init;
	Count = 0;
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
		while(Init <= Nmbr)
		{
			if(Nmbr % Init == 0)
			{
				Count++;
			}
			Init++;
		}
		if(Count == 2)
		{
			printf("%d is a Prime Number\n",Nmbr);
		}
		else
		{
			printf("%d is Not a Prime NUmber\n",Nmbr);
		}
	}
*/
									//do..while loop
	int Nmbr,Count,Init;
        Count = 0;
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
		do
		{
			if(Nmbr % Init == 0)
			{
				Count++;
			}
			Init++;
		}while(Init <= Nmbr);
		if(Count ==  2)
		{
			printf("%d is a Prime Number\n",Nmbr);
		}
		else
		{
			printf("%d is Not a Prime Number\n",Nmbr);
		}
	}
}

