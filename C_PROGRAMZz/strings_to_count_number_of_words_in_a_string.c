/*TO COUNT NUMBER OF WORDS IN A STRING*/

#include<stdio.h>

void main()
{
	char A[100];
	int i,Count;
	Count = 0;
	printf("Enter the string\n");
	scanf("%[^\n]",A);
	printf("\nEntered String :- %s",A);
	for(i=0;A[i] != '\0';i++)
	{
		if(A[i] == ' ')
		{
			Count++;
		}
	}
	printf("\nGIVEN STRING HAS %d words\n",Count+1);
}
