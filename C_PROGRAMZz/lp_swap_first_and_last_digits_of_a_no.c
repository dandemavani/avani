/*TO SWAP FIRST AND LAST DIGIT OF A NUMBER */

#include<stdio.h>
#include<stdlib.h>

void main()
{ 								//while loop
/*	int Nmbr,L_Dgt,F_Dgt,Revse,Temp_1,Temp_2,Swap,Remndr_1,Remndr_2;
	Revse = 0;
	printf("Enter a number\n");
	scanf("%d",&Nmbr);
	if(Nmbr < 0)
	{
		printf("Invalid Number\n");
		exit(0);
	}
	else
	{
		Temp_1 = Temp_2 = Nmbr;
		L_Dgt = Nmbr % 10;
	        while(Nmbr > 10)
		{
			Nmbr = iNmbr / 10;
			F_Dgt = Nmbr;
		}
		printf("Last digit = %d \t First digit = %d\n",L_Dgt,F_Dgt);
		Temp_1 = Temp_1 / 10;
		while(Temp_1 > 10)
		{
			Remndr_1 = Temp_1 %10;
			Revse = Revse * 10 + Remndr_1;
			Temp_1 = Temp_1 / 10;
		}
		printf("Reversed Number = %d\n",Revse);
		Swap = L_Dgt;
		while(Revse > 1)
		{
			Remndr_2 = Revse % 10;
			Swap = Swap * 10 + Remndr_2;
			Revse = Revse / 10;
		}
		printf("Semi-Reversed number = %d\n",Swap);
		Swap = Swap * 10 + F_Dgt;
	}
	printf("Entered Value = %d \t Swapped Value = %d\n",Temp_2,Swap); 
*/
											//do..while loop
	int Nmbr,L_Dgt,F_Dgt,Revse,Temp_1,Temp_2,Swap,Remndr_1,Remndr_2;
        Revse = 0;
        printf("Enter a number\n");
        scanf("%d",&Nmbr);
        if(Nmbr < 0)
        {
                printf("Invalid Number\n");
                exit(0);
        }
        else
	{
		Temp_1 = Temp_2 = Nmbr;
		L_Dgt = Nmbr % 10;
		do
		{
			Nmbr = 	Nmbr / 10;
			F_Dgt = Nmbr;
		}while(Nmbr > 10);
		printf("Last digit = %d   First digit = %d\n",L_Dgt,F_Dgt);
                Temp_1 = Temp_1 / 10;
		do
		{
			Remndr_1 = Temp_1 % 10;
			Revse = Revse * 10 + Remndr_1;
			Temp_1 = Temp_1 / 10;
		}while(Temp_1 > 10);
		printf("Semi-Reversed Number = %d\n",Revse);
		Swap = L_Dgt;
		do
		{
			Remndr_2 = Revse % 10;
			Swap = Swap * 10 + Remndr_2;
			Revse = Revse / 10;
		}while(Revse > 0);
		Swap = Swap * 10 + F_Dgt;
                printf("Entered Number = %d       Swapped Number = %d\n",Temp_2,Swap);
	}
}	
