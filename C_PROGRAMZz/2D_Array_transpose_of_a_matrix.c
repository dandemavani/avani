/*TO TRANSPOSE A MATRIX*/

#include<stdio.h>

void main()
{
	int A[10][10],B[10][10],i,j,Rws,Cols;
	printf("Enter the Row size and Coloumn Size\n");
	scanf("%d%d",&Rws,&Cols);
	printf("Enter the Elements to array\n");
	for(i = 0; i < Rws; i++)
	{
		for(j = 0; j < Cols; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Entered matrix\n");
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
			B[j][i] = A[i][j];
		}
	}
	printf("Transposed Matrix\n");
	for(i = 0; i < Cols; i++)
	{
		for(j = 0; j <  Rws; j++)
		{
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}
}
