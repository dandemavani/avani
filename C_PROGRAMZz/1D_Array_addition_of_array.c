/*ADDITION OF TWO MATRICES*/

#include<stdio.h>

void main()
{
	int A[10],B[10],Sum[10],i,Lmt;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	printf("Enter elements to first array\n");
	for(i = 0;i < Lmt; i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
		printf("\n");
	}
	printf("\nEntered first array elements are \t ");
	for(i = 0; i < Lmt; i++)
	{
		printf("A[%d] =%d\t",i,A[i]);
	}
	printf("\nEnter elements to second array\n");
        for(i = 0;i < Lmt; i++)
        {
                printf("B[%d] = ",i);
                scanf("%d",&B[i]);
                printf("\n");
        }
        printf("\nEntered second array elements are \t");
        for(i = 0; i < Lmt; i++)
        {
                printf("B[%d] =%d\t",i,B[i]);
        }
	for(i = 0; i < Lmt; i++)
	{
		Sum[i] = A[i] + B[i];
	}
	printf("\nResultant Sum array is as follows:\n");
	for(i = 0; i < Lmt; i++)
	{
		printf("Sum[%d] = %d\t",i,Sum[i]);
	}
}

