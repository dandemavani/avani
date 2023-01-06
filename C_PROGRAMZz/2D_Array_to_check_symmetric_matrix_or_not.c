/*TO CHECK MATRIX IS SYMMETRIC OR NOT*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int A[10][10],B[10][10],i,j,R_Cnt,C_Cnt,Flag = 0;
	printf("Enter the Row Count and coloumn coun\n");
	scanf("%d%d",&R_Cnt,&C_Cnt);
	if(R_Cnt != C_Cnt)
	{
		printf("\nRow and Colomn size is not matching....So anyway it's not a Symmetric matrix\n");
		exit(0);
	}
	else
	{
		printf("\nEnter elements to matrix\n");
		for(i=0;i<R_Cnt;i++)
		{
			for(j=0;j<C_Cnt;j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		printf("\nArray elements are\n ");
		for(i=0;i<R_Cnt;i++)
		{
			for(j=0;j<C_Cnt;j++)
			{
				printf("%d\t",A[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<R_Cnt;i++)
		{
			for(j=0;j<C_Cnt;j++)
			{
				B[i][j] =A[j][i];
			}
		}
		printf("\nTransposed matrix\n");
		for(i=0;i<C_Cnt;i++)
		{
			for(j=0;j<R_Cnt;j++)
			{
				printf("%d\t",B[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<R_Cnt;i++)
		{
			for(j=0;j<C_Cnt;j++)
			{
				if(A[i][j] != B[i][j])
				{
					Flag++;
				}
			}
		}
		if(Flag == 0)
		{
			printf("\n Matrix is Symmetric\n");
		}
		else
		{
			printf("\nMatrix is Asyymetric\n");
		}
	}
}
