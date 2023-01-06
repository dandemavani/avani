/*To convert lower case string to upper case*/

#include<stdio.h>

void main()
{
	char A[10];
	int i,j;
	printf("Enter the string\n");
	scanf("%s",A);
	printf("\nEntered string: %s",A);
	for(i=0;A[i] != '\0';i++)
	{
		if(A[i] >= 'a' && A[i] <= 'z')
		{
			A[i] = A[i] - 32;
		}
	}
	printf("\n ARRAY AFTER CONVERSION : %s",A);
}
