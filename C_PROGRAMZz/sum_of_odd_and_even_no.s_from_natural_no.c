#include<stdio.h>

void main()
{
	int Even_Sum,Odd_Sum,Init,Lmt;
	printf("Enter the Limit\n");
	scanf("%d",&Lmt);
	Even_Sum = Odd_Sum = 0;
	for(Init = 1;  Init <= Lmt;  Init++)
	{
		if(Init % 2 == 0)
		{
			Even_Sum = Even_Sum + Init;
		}
		else
		{
			Odd_Sum = Odd_Sum + Init;
		}
	}
	printf("Sum of Even no.s = %d\nSum of Odd no.s = %d\n",Even_Sum,Odd_Sum);
}
