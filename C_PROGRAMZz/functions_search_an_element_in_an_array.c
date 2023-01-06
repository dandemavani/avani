/*TO PERFORM LINEAR SEARCH IN ARRAY USING FUNCTION*/

#include<stdio.h>

void Search(int [],int,int);

void main()
{
	int A[10],i,Size,Key;
	printf("Enter the size of Array\n");
	scanf("%d",&Size);
	printf("\nEnter %d elements to array\n",Size);
	for(i = 0; i < Size; i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Entered Array elements are:-\n");
	for(i = 0;i < Size; i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\nEnter the key you want to search:-");
	scanf("%d",&Key);
	Search(A[],Size,Key);
}

void Search(int A[],int S,int K)
{
	int i,Flag;
	Flag = 0;
	for(i = 0; i < S; i++)
	{
		if(A[i] == K)
		{
			Flag++;
		}
	}
	if(Flag == 1)
	{
		printf("\nYes...%d key is there in the Array",K);
	}
	else
	{
		printf("\nSorry...%d key is not there in this Array",K);
	}
}

