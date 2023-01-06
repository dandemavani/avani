/*TO FIND OCCURANCE OF A CHARACTOR IN A STRING*/

#include<stdio.h>

void main()
{
	char A[20],Ch;
	int i,Flag = 0;
	printf("\nEnter the string\n");
	scanf("%[^\n]",A);
	printf("\nString you Entered:-");
	puts(A);
	getchar();
	printf("Enter the charactor you want to search\n");
	scanf("%c",&Ch);
	for(i=0;A[i] != '\0';i++)
	{
		if(A[i] == Ch)
		{
			Flag++;
			break;
		}
	}
	if(Flag == 1)
	{
		printf("%c finds first in %dth location of string\n",Ch,i+1);
	}
	else
	{
		printf("%c is not there in the provided string\n",Ch);
	}
}
