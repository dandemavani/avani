/*TO FIND SUM OF ELEMENTS IN 1D ARRAY*/

#include<stdio.h>

void main()
{
	int A[10],i,Lmt,Sum=0;
	printf("Enter limit\n");
	scanf("%d",&Lmt);
	printf("\nEnter elements to first array\n");
        for(i=0;i<Lmt;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("First array elements are\n");
	for(i=0;i<Lmt;i++)
	{
		printf("%d\t",A[i]);
	}
	for(i=0;i<Lmt;i++)
	{
		Sum = Sum + A[i];
	}
	printf("\nSum of array elements is %d\n",Sum);
}

