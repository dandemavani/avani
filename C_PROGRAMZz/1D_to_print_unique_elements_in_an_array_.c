/*Program to print unique elements in an array*/

#include<stdio.h>

void main()
{
	int A[10],i,j,Lmt,Count;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	printf("\nEnter the elements to array\n");
	for(i=0;i<Lmt;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nEntered array elements are\n");
	for(i=0;i<Lmt;i++)
	{
		printf("%d\t",A[i]);
	}
	for(i=0;i<Lmt;i++)
	{
		for(j=i+1;j<Lmt;j++)
		{
			if(A[i] != A[j])
			{
				printf("%d\t",A[i]);
			}
		}
	}
}
