/*TO CHECK PALINDROME OR NOT*/

#include<stdio.h>
#include<string.h>

void main()
{
	char A[10],B[10];
	int i,j,Count = 0,Flag = 0;
	printf("Enter the first string\n");
	gets(A);
	printf("\nEntered string:%s",A);
	for(i=0;A[i] != '\0';i++)
	{
		Count++;
	}
	for(i=Count-1,j=0;i >= 0; i--,j++)
	{
		B[j] = A[i];
	}
	B[j] ='\0';
 	printf("\nReversed String :%s",B);
	for(i=0,j=0;A[i] != '\0',B[j] != '\0';i++,j++)
	{
		if(A[i] != B[j])
		{
			printf("\n String is  not Palindrome\n");
			break;
		}
		else
		{
			Flag++;
		}
	}
	if(Flag == Count)
	{
		printf("\nString is palindrome\n");
	}
}

