/*COMPARE 2 STRINGS*/

#include<stdio.h>

void main()
{
	char A[10],B[10];
	int i,j,Length_1,Length_2,Count;
	Length_1 = Length_2 = Count = 0;
	printf("\n Enter the first string\n");
	scanf("%s",A);
	printf("\n Enter the second string\n");
	scanf("%s",B);
	printf("\nFirst string:%s",A);
	printf("\nSecond string:%s",B);
	for(i=0;A[i] != '\0';i++)
	{
		Length_1++;
	}
	for(j=0;B[j] != '\0';j++)
	{
		Length_2++;
	}
	if(Length_1 == Length_2)
	{
		printf("\nLength of Both strings are same\n");
		for(i=0,j=0;A[i] != '\0',B[i] != '\0';i++,j++)
		{
			if(A[i] != B[j])
			{
				printf("\nStrings are not same\n");
				break;
			}
			else
			{
				Count++;
			}
		}
		if(Count == Length_1)
		{
			printf("\nBoth the Strings are same\n");
		}
	}
	else
	{
		printf("\nSorry entered two strings are not same in length also\n");
	}
}

