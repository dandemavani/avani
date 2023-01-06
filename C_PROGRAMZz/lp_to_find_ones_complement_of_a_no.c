/*TO FIND 1's COMPLEMENT OF A NUMBER*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int B_Nmbr,Remndr_1,Remndr_2,Revse;
	Revse = 0;
	printf("Enter a Binary Number\n");
       	scanf("%d",&B_Nmbr);
	while(B_Nmbr != 0)
	{
		Remndr_1 = B_Nmbr % 10;
		Revse = Revse * 10 + Remndr_1;
		B_Nmbr =B_Nmbr / 10;
	}
	printf("%d\n",Revse);
	while(Revse > 0)
	{
		Remndr_2 = Revse % 10;
		if(Remndr_2 == 1)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		Revse = Revse / 10;
	}
}

			
