/*TO PRINT ARMSTRONG NUMBERS BETWEEN TWO RANGES*/

#include<stdio.h>
#include<math.h>

void Armstrong(int a,int b);

void main()
{
	int S_Lmt,E_Lmt;
	printf("Enter the starting limit and Ending limit accordingly\n");
	scanf("%d%d",&S_Lmt,&E_Lmt);
	Armstrong(S_Lmt,E_Lmt);
}

void Armstrong(int Sl,int El)
{
	int i,Temp_1,Temp_2,Rem,j,Sum,Count,Rev;
	printf("Armstrong numbers between %d and %d is as follows\n",Sl,El);
	for(i = Sl;i <= El;i++)
	{
		Rev = Count = 0;
		Temp_1 = Temp_2= i;
		while(Temp_1 > 0)
		{
			Count++;
			Temp_1 = Temp_1 / 10;
		}
		while(Temp_2 > 0)
		{
			Rem = Temp_2 % 10;
			Rev = Rev + pow(Rem,Count);
			Temp_2 = Temp_2 / 10;
		}
		if(Rev == i)
		{
			printf("%d\t",i);
		}
	}
}
