/*TO SORT ODD AND EVEN NUMBERS SEPERATELY IN AN ARRAY*/

#include<stdio.h>
#define Size 10

void main()
{
	int A[Size],Even,Odd,i,j,Temp,Lmt;
	Even = Odd = 0;
	printf("Enter the limit of array\n");
	scanf("%d",&Lmt);
	printf("\nEnter elements to array\n");
	for(i=0;i<Lmt;i++)
	{
		scanf("%d",&A[i]);
		if(A[i] % 2 == 0)
		{
			Even++;
		}
		else
		{
			Odd++;
		}	
	}
	printf("Even count = %d \n Odd count = %d\n",Even,Odd);
	printf("\nEntered array elements are\n");
	for(i=0;i<Lmt;i++)
	{
		printf("%d\t",A[i]);
	}
	for(i=0;i<Lmt;i++)
	{
		for(j=i+1;j<Lmt;j++)
		{
			if(A[i] % 2 != 0)
			{
				Temp = A[i];
				A[i] = A[j];
				A[j] = Temp;
			}
		}
	}
	for(i=Odd;i<Lmt;i++)
	{
		for(j=i+1;j<Lmt;j++)
		{
			if(A[i] % 2 != 0)
			{
				Temp = A[i];
				A[i] = A[j];
				A[j] = Temp;
			}
		}
	}
	printf("\nArray after arrangement\n");
	for(i=0;i<Lmt;i++)
	{
		printf("%d\t",A[i]);
	}
}
