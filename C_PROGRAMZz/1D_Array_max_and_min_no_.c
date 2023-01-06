/*TO CHECK PRINT MAXIMUM AND MINIMUM NUMBER IN ARRAY*/

#include<stdio.h>

void main()
{
	int A[10],i,Lmt,Min,Max;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	printf("Enter elements to matrix\n");
	for(i=0;i<Lmt;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nArray elements are\n");
	for(i=0;i<Lmt;i++)
	{
		printf("%d\t",A[i]);
	}
	Min = Max = A[0];
	for(i=0;i<Lmt;i++)
	{
		if(A[i] > Max)
		{
			Max = A[i];
		}
		if(A[i] < Min)
		{
			Min = A[i];
		}
	}
	printf("Minumum NUmber in array = %d\nMaximum Number in array = %d\n",Min,Max);
}

