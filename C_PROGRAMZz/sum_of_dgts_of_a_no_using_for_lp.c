#include<stdio.h>

void main()
{
/*	int Nmbr,Sum,Temp,Remndr;
	Sum = 0;
	printf("Enter the number\n");
	scanf("%d",&Nmbr);
	Temp = Nmbr;
	for(  ; Nmbr != 0; Nmbr = Nmbr / 10)
	{
		Remndr = Nmbr % 10;
		Sum = Sum + Remndr;
	}
	printf("Sum of digits of a %d is %d\n",Temp,Sum);


*/

	int Nmbr,Count,Rmndr;
	Count = 0;
	printf("Enter a number\n");
	scanf("%d",&Nmbr);
	while(Nmbr != 0)
	{
		Rmndr = Nmbr % 10;
		if(Rmndr != 0)
			Count++;
		else
			Count++;
		Nmbr = Nmbr / 10;
	}
	printf("Num of digits = %d",Count);

}
