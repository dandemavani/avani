/*TO FIND LCM OF 2 NUMBERS USING LOOP*/

#include<stdio.h>

void main()
{									//while loop
/*	int Nmbr_1,Nmbr_2,Temp_1,Temp_2,Max,LCM,Init;
	Init = 1;
	LCM = 0;
	printf("Enter any two numbers\n");
	scanf("%d%d",&Nmbr_1,&Nmbr_2);
	Max = ( Nmbr_1 > Nmbr_2) ? Nmbr_1 :Nmbr_2;
	Init = Max;
	while(1)
	{
		if(Init % Nmbr_1 == 0 && Init % Nmbr_2 == 0)
		{
			LCM = Init;
			break;
		}
		Init += Max;
	}
	printf("LCM Of %d and %d is %d\n",Nmbr_1,Nmbr_2,LCM);
*/

									//do..while loop
	int Init,Nmbr_1,Nmbr_2,Max,LCM;
	printf("Enter two numbers\n");
	scanf("%d%d",&Nmbr_1,&Nmbr_2);
	Max = (Nmbr_1 > Nmbr_2) ? Nmbr_1 :Nmbr_2;
	Init = Max;
	do
	{
		if(Init % Nmbr_1 == 0 && Init % Nmbr_2 == 0)
		{
			LCM = Init;
			break;
		}
		Init += Max;
	}while(1);
	printf("LCM OF %d and %d is %d\n",Nmbr_1,Nmbr_2,LCM);	
}

	
