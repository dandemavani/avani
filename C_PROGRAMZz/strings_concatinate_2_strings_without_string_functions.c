/*Concatinate 2 strings*/

#include<stdio.h>

void main()
{
	char A[10],B[10],C[20];
	int i,Count_1=0,Count_2=0,j,k;
	printf("Enter the first string\n");
	scanf("%s",A);
	printf("\nEnter the second string\n");
	scanf("%s",B);
	printf("\n String 1=%s",A);
	printf("\n String 2=%s",B);
	for(i=0;A[i] != '\0';i++)
	{
		Count_1++;
	}
	for(i=0;B[i] != 0;i++)
	{
		Count_2++;
	}
	printf("\nFirst string length=%d \t Second string length=%d\n",Count_1,Count_2);
	for(i=0;i<Count_1;i++)
	{
		C[i] = A[i];
	}
	for(i=0;i<Count_2;i++)
	{
		C[i + Count_1] = B[i];
	}
	printf("\nAfter concatination %s\n",C);
}
