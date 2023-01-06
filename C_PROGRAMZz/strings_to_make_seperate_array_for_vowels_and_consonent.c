/*TO MAKE SEPERATE ARRAY FOR VOWELS AND CONSONENTS*/

#include<stdio.h>

void main()
{
	char A[10],B[10],C[10];
	int i,j,k;
	printf("Enter the string\n");
	scanf("%s",A);
	printf("\nEntered string:%s",A);
	for(i=0,j=0,k=0;A[i] != '\0';i++)
	{
		if(A[i] == 'a' || A[i] == 'A' || A[i] == 'e' || A[i] == 'E' || A[i] == 'i' || A[i] == 'I' || A[i] == 'o' || A[i] == 'O' || A[i] == 'u' || A[i] == 'U')
		{
			B[j] = A[i];
			j++;
		}
		else
		{
			C[k] = A[i];
			k++;
		}
	}
	printf("\nVowel in the provided string:%s",B);
	printf("\nConsonents in the provided string:%s",C);
}
