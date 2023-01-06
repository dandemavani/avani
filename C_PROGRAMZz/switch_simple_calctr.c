/*SIMPLE CALCULATOR USING SWITCH STATEMENT*/

#include<stdio.h>

void main()
{
	char Optr;
	int Nmbr_1,Nmbr_2;
	printf("Enter the Two numbers\n");
	scanf("%d%d",&Nmbr_1,&Nmbr_2);
	getchar();
	printf("Enter any operators:+....-....*..../....\n");
	Optr = getchar();
	switch(Optr)
	{
		case '+':	
			printf("%d + %d = %d\n",Nmbr_1,Nmbr_2,Nmbr_1 + Nmbr_2);
			break;
		case '-':
		        printf("%d - %d = %d\n",Nmbr_1,Nmbr_2,Nmbr_1 - Nmbr_2);
		        break;
		case '*':
                        printf("%d * %d = %d\n",Nmbr_1,Nmbr_2,Nmbr_1 * Nmbr_2);
                        break;
                case '/':
                        printf("%d / %d = %d\n",Nmbr_1,Nmbr_2,Nmbr_1 / Nmbr_2);
                        break;
	
		default:
		        printf("Invalid OPerator!...\n");
		        break;
	}	
}

