#include<stdio.h>

void main()
{
	int Num_1,Num_2,Swap;
	printf("Enter two numbers\n");
	scanf("%d%d",&Num_1,&Num_2);
	printf("BEFORE SWAPPING:Num_1=%d\tNum_2=%d\n",Num_1,Num_2);
	Swap=Num_1;
	Num_1=Num_2;
	Num_2=Swap;
	printf("AFTER SWAPPING:Num_1=%d\tNum_2=%d\n",Num_1,Num_2);

}
