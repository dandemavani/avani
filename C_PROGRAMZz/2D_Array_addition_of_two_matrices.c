/*FOR ADDITION OF 2 MATRICES*/

#include<stdio.h>

void main()
{
		int A[10][10],B[10][10],Sum[10][10],i,j,Rws,Cols;
		printf("Enter the row number and colomn number\n");
		scanf("%d%d",&Rws,&Cols);
		printf("Enter elements to first matrix\n");
		for(i=0;i<Rws;i++)
		{
			for(j=0;j<Cols;j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		printf("\nElements of First array\n");
		for(i=0;i<Rws;i++)
		{
			for(j=0;j<Cols;j++)
			{
				printf("%d\t",A[i][j]);
			}
			printf("\n");
		}
		printf("\nEnter elements to second array\n");
		for(i=0;i<Rws;i++)
		{
			for(j=0;j<Cols;j++)
			{
				scanf("%d",&B[i][j]);
			}
		}
		printf("\nElements of second second array\n");
		for(i=0;i<Rws;i++)
		{
			for(j=0;j<Cols;j++)
			{
				printf("%d\t",B[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<Rws;i++)
		{
			for(j=0;j<Cols;j++)
			{
				Sum[i][j] = A[i][j] + B[i][j];
			}
		}
		printf("\nResultant Sum matrix is as follows\n");
		for(i=0;i<Rws;i++)
		{
			for(j=0;j<Cols;j++)
			{
				printf("%d\t",Sum[i][j]);
			}
			printf("\n");
		}
	
}


