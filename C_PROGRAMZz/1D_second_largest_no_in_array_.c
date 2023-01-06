/*TO FIND SECOND LARGEST ELEMENT IN A NUMBER*/

#include<stdio.h>

void main()
{
	int A[10],i,j,Lmt,Max_2,Temp;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	printf("\nEnter elements to array\n");
	for(i = 0; i < Lmt; i++)
	{
		scanf("%d",&A[i]);
	}
	 printf("\nEntered elements to array\n");
        for(i = 0; i < Lmt; i++)
        {
                printf("%d\t",A[i]);
        }
	for(i = 0; i < Lmt; i++)
	{
		for(j = i + 1; j < Lmt; j++)
		{
			if(A[i] < A[j])
			{
				 Temp = A[i];
				 A[i] = A[j];
				 A[j] = Temp;
			}
		}
	}
	printf("\nSecond largest element = %d\n",A[1]);
}
