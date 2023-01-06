/*ARRAY MULTIPLICATION*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int A[10][10],B[10][10],Mul[10][10],i,j,k,R1,C1,R2,C2;
	printf("Enter the Row size and colomn size for matrix_1 and matrix_2\n");
	scanf("%d%d%d%d",&R1,&C1,&R2,&C2);
	if(C1 != R2)
	{
		printf("Not equal matrices\n");
		exit(0);
	}
	else
	{
		printf("Enter the elements to first matrix\n");
		for(i=0;i<R1;i++)
		{
			for(j=0;j<C1;j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		printf("\nEntered first array elements\n");
                for(i=0;i<R1;i++)
                {
                        for(j=0;j<C1;j++)
                        {
                                printf("%d\t",A[i][j]);
                        }
			printf("\n");
		}
		printf("Enter the elements to second matrix\n");
                for(i=0;i<R2;i++)
                {
                        for(j=0;j<C2;j++)
                        {
                                scanf("%d",&B[i][j]);
                        }
                }
                printf("\nEntered SECOND array elements\n");
                for(i=0;i<R2;i++)
                {
                        for(j=0;j<C2;j++)
                        {
                                printf("%d\t",B[i][j]);
                        }
                        printf("\n");
                }
		for(i=0;i<R1;i++)
		{
			for(j=0;j<C2;j++)
			{
				Mul[i][j] = 0;
				for(k=0;k<C1;k++)
				{
					Mul[i][j] = Mul[i][j] + (A[i][k] * B[k][j]);
				}
			}
			printf("\n");
		}
		printf("\n Multiplication table \n");
		for(i=0;i<R1;i++)
		{
			for(j=0;j<C2;j++)
			{
				printf("%d\t",Mul[i][j]);
			}
			printf("\n");
		}
	}
}

