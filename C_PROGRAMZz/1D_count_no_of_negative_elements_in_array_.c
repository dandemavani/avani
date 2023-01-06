/*To count number of negative elemets in an array*/

#include<stdio.h>

void main()
{
	int A[10],i,j,Lmt,Ngtve;
	Ngtve = 0;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	printf("\nEnter elements to array\n");
	for(i=0;i<Lmt;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nEntered elements to array\n");
	for(i=0;i<Lmt;i++)
	{
		printf("%d\t",A[i]);
	}
	for(i=0;i<Lmt;i++)
	{
		if(A[i] < 0)
		{
			Ngtve++;
		}
	}
	printf("\nTotal negative numbers = %d\n",Ngtve);
}

