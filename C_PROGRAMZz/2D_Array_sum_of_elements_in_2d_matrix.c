/*TO FIND SUM OF ARRAY ELEMENTS*/

#include<stdio.h>

void main()
{
	int A[20][20],Sum,i,j,Rws,Cols;
	printf("Enter the array row size and coloumn size\n");
	scanf("%d%d",&Rws,&Cols);
	printf("Enter the elements to array\n");
	for(i = 0; i<Rws; i++)
	{
		for(j = 0; j < Cols; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nElements of array are as follows\n");
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
			Sum = Sum + A[i][j];
		}
	}
	printf("Sum of %d * %d is %d\n",Rws,Cols,Sum);
}
