#include<stdio.h>

void main()
{
	int Nmbr,Rmndr_1,Rmndr_2,Revse,Sum,Temp;
	Sum = 0;
	Revse = 0;
	printf("Enter a number\n");
	scanf("%d",&Nmbr);
	Temp = Nmbr;
	while(Nmbr != 0)
	{
		Rmndr_1 = Nmbr % 10;
		Revse = (Revse * 10) + Rmndr_1;
		Nmbr = Nmbr / 10;
	}
	while(Revse != 0)
	{
		Rmndr_2 = Revse % 10;
		if(Rmndr_2 == 9)
		{
			Rmndr_2 = 0;
			goto x;
		}
	        ++Rmndr_2;
	      x:Sum = (Sum * 10) + Rmndr_2;
		Revse = Revse / 10;
		Rmndr_2 = 0;
	}
	printf("Number =%d\n",Sum);



/*	 int Nmbr,Rmndr_1,Rmndr_2,Revse,Sum,Temp;
        Sum = 0;
        Revse = 0;
        printf("Enter a number\n");
        scanf("%d",&Nmbr);
        Temp = Nmbr;
        while(Nmbr != 0)
        {
                Rmndr_1 = Nmbr % 10;
                Revse = (Revse * 10) + Rmndr_1;
                Nmbr = Nmbr / 10;
        }
	while(Revse != 0)
	{
		Rmndr_2 = Revse % 10;
		if(Rmndr_2 != 9)
		{
			++Rmndr_2;
			printf("%d\t",Rmndr_2);
		}
		else
		{
			printf("0");
		}
		Revse = Revse / 10;
	}
*/
}	
