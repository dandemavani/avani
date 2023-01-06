/*To check whether there is a key present or not in an array*/

#include<stdio.h>

void main()
{
	int A[10],i,Lmt,Item,Flag = 0;
	printf("Enter limit of array\n");
	scanf("%d",&Lmt);
	printf("Enter elements to array\n");
	for(i = 0; i < Lmt; i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Entered array elements are \n");
	for(i = 0; i < Lmt; i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\nEnter the item to check whether it is in array or not\n");
	scanf("%d",&Item);
	for(i = 0;i < Lmt; i++)
	{
		if( A[i] == Item)
		{
			Flag++;
			break;
		}
	}
	if(Flag == 1)
	{
		printf("%d is there in %dth position in the entered array\n",Item,i);
	}
	else
	{
		printf("%d is not there in the eneterd array\n",Item);
	}
}
