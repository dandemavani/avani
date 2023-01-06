#include<stdio.h>

void main()
{
	int Nmbr_1,Nmbr_2,Minm,Init,LCM,HCF;
	printf("Enter two Numbers\n");
	scanf("%d%d",&Nmbr_1,&Nmbr_2);
	Minm = Nmbr_1 < Nmbr_2 ? Nmbr_1 : Nmbr_2;
	for(Init = 1; Init <= Minm; Init++)
	{
		if(Nmbr_1 % Init == 0 && Nmbr_2 % Init == 0)
		{
			HCF = Init;
		}
	}
	LCM = (Nmbr_1 * Nmbr_2) / HCF;
	printf("HCF OF %d and %d is %d \n LCM OF %d and %d is %d\n",Nmbr_1,Nmbr_2,HCF,Nmbr_1,Nmbr_2,LCM);
}
