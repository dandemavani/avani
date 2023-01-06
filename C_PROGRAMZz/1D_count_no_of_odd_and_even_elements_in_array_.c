/*PROGRAM TO COUNT ODD/EVEN NUMBERS IN AN ARRAY*/

#include<stdio.h>

void main()
{
	int A[10],i,j,Lmt,Even,Odd;
	Even = Odd = 0;
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
		if(A[i] % 2 == 0)
		{
			Even++;
		}
		else
		{
			Odd++;
		}
	}
	printf("\nNumber of Even numbers=%d \n Number of Odd numbers=%d\n",Even,Odd);
}
