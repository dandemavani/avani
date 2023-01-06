/*TO FIND SUM OF ROWS AND COLOMNS OF A MATRIX*/

#include<stdio.h>

void main()
{
	int A[20][20],i,j,R_Cnt,C_Cnt,R_Sum,C_Sum;
	R_Sum = C_Sum = 0;
	printf("Enter the row count and colomn count\n");
	scanf("%d%d",&R_Cnt,&C_Cnt);
	printf("\n Enter elements to arry\n");
	for(i=0;i<R_Cnt;i++)
	{
		for(j=0;j<C_Cnt;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nArray elements\n");
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
		R_Sum = 0;
		for(j=0;j<C_Cnt;j++)
		{
			R_Sum = R_Sum + A[i][j];
		}
		printf("Sum of %dth Row = %d\n",i,R_Sum);
	}
	printf("\n\n\n");
	for(j=0;j<C_Cnt;j++)
        {
                C_Sum = 0;
                for(i=0;i<R_Cnt;i++)
                {
                        C_Sum = C_Sum + A[i][j];
                }
                printf("Sum of %dth colmn = %d\n",j,C_Sum);
        }

}

