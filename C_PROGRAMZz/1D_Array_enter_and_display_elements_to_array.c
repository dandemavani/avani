/*TO READ AND WRITE ELEMENTS TO 1D ARRAY*/

#include<stdio.h>

void main()
{
	int A[20],i,Lmt;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	printf("Enter the elements to the array\n");
	for(i = 0; i < Lmt;i++)
	{
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
		printf("\n");
	}
	printf("Entered array elements are:\n");
	for(i = 0; i < Lmt; i++)
	{
		printf("A[%d] = %d\t",i,A[i]);
	}
}
