/*TO FIND LENGTH OF STRING WITHOUT STRING HANDLING FUNCTION*/

#include<stdio.h>

void main()
{
	char Str[10];
	int Size,Count,i;
	Count=0;
	printf("Enter the string\n");
	scanf("%s",Str);
	printf("\nEntered string is\n");
	printf("%s",Str);
	for(i=0;Str[i] != '\0';i++)
	{
		Count++;
	}
	printf("\nLength of string =%d\n",Count);
}
