#include<stdio.h>

void main()
{
	int Fib_1,Fib_2,Fib_3,Lmt,Init;
	Fib_1 = 0;
	Fib_2 = 1;
	Fib_3 = 0;
	printf("Enter the number upto where the series wants to be printed\n");
	scanf("%d",&Lmt);
	printf("Fibinocci Series upto %d is : \t",Lmt);
	for(Init = 1;  Init <= Lmt;  Init++)
	{
		if(Fib_3 >= Lmt)
		{
			printf("%d\t",Fib_1);
			break;
		}
		printf("%d\t",Fib_1);
		Fib_3 = Fib_1 + Fib_2;
		Fib_1 = Fib_2;
		Fib_2 = Fib_3;
	}
}
