/*TO PRINT STRONG NUMBERS BETWEEN 2 RANGES*/

#include<stdio.h>

void Strong(int,int);

void main()
{
	int S_Lmt,E_Lmt;
	printf("Enter Starting limit and ending limit accordingly\n");
	scanf("%d%d",&S_Lmt,&E_Lmt);
	Strong(S_Lmt,E_Lmt);
}
void Strong(int Sl,int El)
{
	printf("Strong numbers between %d and %d is as follows:",Sl,El);
	int i,j,Rem,Fact,Sum,Temp;
	for(i = Sl; i <= El;i++)
	{
		Sum = 0;
		Temp = i;
		while(Temp > 0)
		{
			Fact = 1;
			Rem = Temp % 10;
			for(j = Rem; j > 0;j--)
			{
				Fact = Fact * j;
			}
			Sum = Sum + Fact;
			Temp = Temp / 10;
		}
		if(Sum == i)
		{
			printf("%d\t",i);
		}
	}
}

			
