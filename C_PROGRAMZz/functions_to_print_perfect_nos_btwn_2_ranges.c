/*TO CHECK PERFECT NUMBERS BETWEEN TWO RANGES*/

#include<stdio.h>

void Perfect(int,int);

void main()
{
	int S_Lmt,E_Lmt;
	printf("Enter the starting limit anmd Ending limit\n");
	scanf("%d%d",&S_Lmt,&E_Lmt);
	Perfect(S_Lmt,E_Lmt);
}

void Perfect(int Sl,int El)
{
	int i,Temp,Sum;
	printf("Perfect numbers between %d and %d is as follows:",Sl,El);
	for(i = Sl; i <= El; i++)
	{
		Sum = 0;
		Temp = i;
		for(i = 1; i < Temp; i++)
		{
			if(Temp % i == 0)
			{
				Sum = Sum + i;
			}
		}
		if(Sum == i)
		{
			printf("%d\t",i);
		}
	}
}
