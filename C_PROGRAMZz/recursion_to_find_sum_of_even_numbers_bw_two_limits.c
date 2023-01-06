#include<stdio.h>

int Sum_of_Even(int,int,int);

void main()
{
	int Sl,El,Sum;
	Sum = 0;
	printf("Enter the Starting limit and Ending limit accordingly\n");
	scanf("%d%d",&Sl,&El);
	printf("Sum of Even number between %d to %d is %d\n",Sl,El,Sum_of_Even(Sl,El,Sum));
}

int Sum_of_Even(int Sl,int El,int Sum)
{
	if(Sl <= El)
	{
		if(Sl % 2 == 0)
		{
			Sum = Sum + Sl;
		}
		Sum_of_Even((Sl+1),El,Sum);
	}
	else
	{
		return(Sum);
	}
}

