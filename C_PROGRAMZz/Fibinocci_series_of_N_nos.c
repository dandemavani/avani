/*TO PRINT FIBINOCCI SERIES OF N numbers*/
#include<stdio.h>

void main()
{
	int Fib_1,Fib_2,Fib_3,Init,Lmt;
	printf("Enter the the limit\n");
	scanf("%d",&Lmt);
	Fib_1 = 0;
	Fib_2 = 1;
	Fib_3 = 0;
	printf("Fibinocci Series of %d Numbers: ",Lmt);
	for(Init = 1;  Init <= Lmt;  Init++)
	{
		printf("%d\t",Fib_1);
		Fib_3 = Fib_1 + Fib_2;
		Fib_1 = Fib_2;
		Fib_2 = Fib_3;
	}
}
