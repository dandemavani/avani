/*TO CHECK WHETHER NUMBER IS PRIME,ARMSTRONG OR PERFECT NUMBER OR NOT*/

#include<stdio.h>
#include<math.h>

int Prime(int);
int Armstrong(int);
int Perfect(int);

void main()
{
	int Nmbr,P_Chk,A_Chk,Pft_Chk;
	printf("Enter the number\n");
	scanf("%d",&Nmbr);
	P_Chk = Prime(Nmbr);
	if(P_Chk == 0)
	{
		printf("%d is Prime Number\n",Nmbr);
	}
	else
	{
		printf("%d is not a Prime Number\n",Nmbr);
	}
	A_Chk = Armstrong(Nmbr);
	if(A_Chk == 0)
	{
		printf("%d is Armstrong number\n",Nmbr);
	}
	else
	{
		printf("%d is Non-Armstrong number\n",Nmbr);
	}
	Pft_Chk = Perfect(Nmbr);
	if(Pft_Chk == 0)
	{
		printf("%d is a Perfect number\n",Nmbr);
	}
	else
	{
		printf("%d is Not a Perfect number\n",Nmbr);
	}

	
}
int Prime(int Num)
{
	int i,Count = 0;
	for(i = 1; i <= Num; i++)
	{
		if(Num % i == 0)
		{
			Count++;
		}

	}
	if(Count == 2)
	{
		return(0);

	}
	else
	{
		return(1);
	}
}
int Armstrong(int Num)
{
	int Count = 0,Temp_1,Temp_2,Rev = 0,Rem;
	Temp_1 =Temp_2 = Num;
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
	if(Rev == Num)
	{
		return(0);
	}
	else
	{
		return(1);
	}
}
int Perfect(int Num)
{
	int i,Sum = 0;
	for(i = 1; i < Num; i++)
	{
		if(Num % i == 0)
		{
			Sum = Sum + i;
		}
	}
	if(Sum == Num)
	{
		return(0);
	}
	else
	{
		return(1);
	}
}

