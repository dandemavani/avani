/*LINEAR SEARCH IN AN ARRAY*/
#include<stdio.h>

void main()
{
	int A[10],i,Lmt,Flag,Item;
	Flag = 0;
        printf("Enter the limit\n");
        scanf("%d",&Lmt);
        printf("\nEnter the unsorted elements to array\n");
        for(i=0;i<Lmt;i++)
        {
                scanf("%d",&A[i]);
        }
        printf("\nEntered array before sorting\n");
        for(i=0;i<Lmt;i++)
        {
                printf("%d\t",A[i]);
        }
	printf("\n Enter the Item to be searched\n");
	scanf("%d",&Item);
	for(i=0;i<Lmt;i++)
	{
		if(A[i] == Item)
		{
			Flag++;
			break;
		}
	}
	if(Flag != 0)
	{
		printf("%d is there in the array at %dth position\n",Item,i);
	}
	else
	{
		printf("%d is not there in the array\n",Item);
	}
}

