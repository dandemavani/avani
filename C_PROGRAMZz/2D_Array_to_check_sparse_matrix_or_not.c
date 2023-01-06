/*To check matrix is sparse matrix or not*/

#include<stdio.h>

void main()
{
	int A[10][10],i,j,R_Cnt,C_Cnt,Z_Flag,Nz_Flag;
	Z_Flag = Nz_Flag = 0;
	printf("Enter the row count and colomn count of matrix accordingly\n");
	scanf("%d%d",&R_Cnt,&C_Cnt);
	printf("\n Enter elements to array\n");
	for(i=0;i<R_Cnt;i++)
	{
		for(j=0;j<C_Cnt;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n Entered array elements are\n");
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
			if(A[i][j] == 0)
			{
				Z_Flag++;
			}
			else
			{
				Nz_Flag++;
			}
		}
	}
	if(Z_Flag > Nz_Flag)
	{
		printf("\nIt's a SPARSE Matrix\n");
	}
	else if(Z_Flag < Nz_Flag)
	{
		printf("\nIt's Not a SPARSE Matrix\n");
	}
	else
	{
		printf("\n Matrix is Something else\n");

	}
}
