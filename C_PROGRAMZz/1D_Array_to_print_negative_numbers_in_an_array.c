/*To PRINT ALL NEGATIVE NUMBERS IN AN ARRAY*/
 
#include<stdio.h>

void main()
{
	int A[10],Lmt,i;
	printf("Enter limit to array\n");
	scanf("%d",&Lmt);
	printf("Enter elements to array\n");
	for(i = 0; i < Lmt; i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Entered array elements are\n");
	for(i = 0; i < Lmt; i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\nThe negative elements in array are as follows\n");
	for(i = 0; i < Lmt; i++)
	{
		if(A[i] < 0)
		{
			printf("%d\t",A[i]);
		}
	}
}
