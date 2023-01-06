#include<stdio.h>

void main()
{		
				/*star pattern 1*/

/*	int i,j;
	for(i = 0; i <=5 ; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
*/

				/*star pattern 2 by entering row number by user*/
/*        int i,j,Rws;
	printf("Enter the number of rows\n");
 	scanf("%d",&Rws);
	for(i = 1; i <= Rws; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
*/

				/*star pattern 3 inverted pattern*/
/*	int i,j,Rws;
	printf("Enter the rows count\n");
	scanf("%d",&Rws);
	for(i = Rws; i >= 1; i--)
	{
		for(j = i; j >= 1; j--)
		{
			printf("*");
		}
		printf("\n");
	}
*/

			/*star pattern 4*/


	int i,j,k;
	printf("enter the rows\n");
	scanf("%d",&k);
	for(i = 1; i <= k; i++)
	{
		for(j = k-1; j > 1; j--)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}	
}
