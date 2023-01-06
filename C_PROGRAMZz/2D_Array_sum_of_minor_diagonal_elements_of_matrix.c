/*TO FIND SUM OF MINOR DIAGONAL ELEMENTS IN A MATRIX*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int A[20][20],i,j,Sum = 0,R_Cnt,C_Cnt;
	printf("Enter the Row count and Colomn Count\n");
	scanf("%d%d",&R_Cnt,&C_Cnt);
	if(R_Cnt != C_Cnt)
	{
		printf("Sorry!...Row and Colomn size are not same\n");
		exit(0);
	}
	else
	{
		printf("\n Enter the elements to matrix\n");
		for(i=0;i<R_Cnt;i++)
		{
			for(j=0;j<C_Cnt;j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		printf("\n Array elements are\n");
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
				if(j == (R_Cnt - (i + 1)))
				{
					Sum = Sum + A[i][j];
				}
			}
		}
		printf("\nSum of Minor diagonal elements are :%d\t",Sum);
  	}
}
