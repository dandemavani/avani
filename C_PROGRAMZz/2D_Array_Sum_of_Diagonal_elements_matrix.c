/*Sum of diagonal elements of a matrix*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int A[10][10],i,j,Rws,Cols,Sum;
	Sum = 0;
	printf("Enter the row size ad colomn size\n");
	scanf("%d%d",&Rws,&Cols);
	if( Rws != Cols)
	{
		printf("Row size and coloumm size wants to be same\n");
		exit(0);
	}
	else
	{
		printf("Enter elements to array\n");
		for(i = 0; i < Rws; i++)
		{
			for(j = 0; j < Cols; j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		printf("\nElements of array\n");
		for(i = 0; i < Rws; i++)
		{
			for(j = 0; j < Cols; j++)
			{
				printf("%d\t",A[i][j]);
			}
			printf("\n");
		}
		for(i = 0; i < Rws; i++)
		{
			for(j = 0; j < Cols; j++)
			{
				if(i == j)
				{
					Sum = Sum + A[i][j];
				}
			}
		}
		printf("Sum of diagonal elements = %d\n",Sum);
	}
}
