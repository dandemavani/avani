/*COPY ONE STRING TO OTHER*/

#include<stdio.h>

void main()
{
	char A[10],B[10];
	int i,j;
	printf("Enter the string\n");
	scanf("%s",A);
	printf("\nEntered String:%s",A);
	for(i=0;A[i] != '\0';i++)
	{
		B[i] = A[i];
	}
	//B[i] = '\0';
	printf("\nCopied String:%s",B);
}
