/*TO FIND HCF OR GCD OF 2 NUMBERS USING LOOPS*/

#include<stdio.h>

void main()
{						//while loop
/*	int Nmbr_1,Nmbr_2,Init,HCF;
	Init = 1;
	printf("Enter two Numbers\n");
	scanf("%d%d",&Nmbr_1,&Nmbr_2);
	while(Init <= Nmbr_1 || Init <= Nmbr_2)
	{
		if(Nmbr_1 % Init == 0 && Nmbr_2 % Init == 0)
		{
			HCF = Init;
		}
		Init++;
	}
	printf("HCF of %d and %d is %d\n",Nmbr_1,Nmbr_2,HCF);
*/


						//do..while loop
	int Nmbr_1,Nmbr_2,Init,HCF;
        Init = 1;
        printf("Enter two Numbers\n");
        scanf("%d%d",&Nmbr_1,&Nmbr_2);
	do
	{
		if(Nmbr_1 % Init == 0 && Nmbr_2 % Init == 0)
                {
                        HCF = Init;
                }
                Init++;
	}while(Init <= Nmbr_1 || Init <= Nmbr_2);
	printf("HCF of %d and %d is %d\n",Nmbr_1,Nmbr_2,HCF);
	
}
