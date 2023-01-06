/*TO REVERSE AN ARRAY*/

#include<stdio.h>

void main()
{
	int A[10],B[10],i,j,Size;
	printf("Enter the size of array\n");
	scanf("%d",&Size);
	printf("\nEnter elements to array\n");
	for(i=0;i<Size;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nEntered array elements are\n");
	for(i=0;i<Size;i++)
	{
		printf("%d\t",A[i]);
	}
	for(i=Size-1,j=0;i>=0,j<Size;i--,j++)
	{
		B[j] = A[i];
	}
	printf("\n Reversed array\n");
	for(j=0;j<Size;j++)
	{
		printf("%d\t",B[j]);
	}
}

