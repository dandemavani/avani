/*TO PERFORM BUBBLE SORT USING FUNCTIONS*/

#include<stdio.h>

void Bubble_Sort(int [],int);

void main()
{
	int A[10],i,Size;
	printf("Enter the size of array\n");
	scanf("%d",&Size);
	printf("\nEnter %d elements to array\n",Size);
	for(i = 0; i < Size; i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nEntered array elements Before Sorting\n");
	for(i = 0;i < Size; i++)
	{
		printf("%d\t",A[i]);
	}
	Bubble_Sort(A,Size);
}

void Bubble_Sort(int A[],int S)
{
	int i,j,Temp;
	for(i = 0; i < S; i++)
	{
		for(j = i + 1; j < S; j++)
		{
			if(A[i] > A[j])
			{
				Temp = A[i];
				A[i] = A[j];
				A[j] = Temp;
			}
		}
	}
	printf("\nArray After Sorting\n");
	for(i = 0; i < S; i++)
	{
		printf("%d\t",A[i]);
	}
}
