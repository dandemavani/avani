/*TO CHECK MATRIX WHETHER SAME OR NOT*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int A[10][10],B[10][10],i,j,R1,C1,R2,C2,Flag=0;
	printf("Enter the row and coloumn size for first matrix and second matrix accordingly\n");
	scanf("%d%d%d%d",&R1,&C1,&R2,&C2);
	if(R1 != R2 || C1 != C2)
	{
		printf("Size of two matrices are not same!...\n");
		exit(0);
	}
	else
	{
		printf("Enter the elements to first array\n");
		for(i=0;i<R1;i++)
		{
			for(j=0;j<C1;j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		printf("\nFirst array elements are\n");
		for(i=0;i<R1;i++)
		{
			for(j=0;j<C1;j++)
			{
				printf("%d\t",A[i][j]);
			}
			printf("\n");
		}
		 printf("Enter the elements to second array\n");
                for(i=0;i<R2;i++)
                {
                        for(j=0;j<C2;j++)
                        {
                                scanf("%d",&B[i][j]);
                        }
                }
                printf("\n array elements are\n");
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
			for(j=0;j<C1;j++)
			{
				if(A[i][j] != B[i][j])
				{
					Flag++;
					break;
				}
			}
		}
		if(Flag == 0)
		{
			printf("Both are same\n");
		}
		else
		{
			printf("Both are not same\n");
		}
	}
}
