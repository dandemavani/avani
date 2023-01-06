/*To find reverse of entered string*/

#include<stdio.h>

void main()
{
	char A[10],B[10];
	int i,j,Count=0;
	printf("Enter the string\n");
	scanf("%s",A);
	for(i=0;A[i] != '\0'; i++)
	{
		Count++;
	}
	for(i=Count-1,j=0;i>=0;i--,j++)
	{
		B[j] = A[i];
	}
	B[j] = '\0';
	printf("\nReversed String:%s",B);
}
