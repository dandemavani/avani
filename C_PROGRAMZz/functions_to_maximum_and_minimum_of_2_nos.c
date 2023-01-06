/*TO FIND MAXIMUM AND MINIMUM OF 2 NO.S*/

#include<stdio.h>

int Maxim(int,int);
int Minim(int,int);

void main()
{
	int A,B;
	printf("Enter two numbers\n");
	scanf("%d%d",&A,&B);
	printf("\nMaximum number=%d \n Minimum number =%d \n",Maxim(A,B),Minim(A,B));
}
int Maxim(int X,int Y)
{
	int Max;
	Max = (X > Y) ? X :Y;
	return(Max);
}
int Minim(int X,int Y)
{
	int Min;
	Min = (X < Y) ? X : Y;
	return(Min);
}

