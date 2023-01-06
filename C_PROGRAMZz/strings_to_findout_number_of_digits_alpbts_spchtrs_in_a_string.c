/*TO FIND NUMBER OF DIGITS,ALPHABETS,SPECIAL CHARACTORS*/

#include<stdio.h>

void main()
{
	char A[20];
	int i,Albts,Digits,Spcl_Chtrs;
	Albts = Digits = Spcl_Chtrs = 0;
	printf("Enter the string\n");
	scanf("%[^\n]",A);
	printf("Entered string is %s",A);
	for(i=0;A[i] != '\0';i++)
	{
		if((A[i] >= 'a' && A[i] <= 'z') || (A[i] >= 'A' && A[i] <= 'Z'))
		{
			Albts++;
		}
		else if(A[i] >= '0' && A[i] <= '9')
		{
			Digits++;
		}
		else
		{
			Spcl_Chtrs++;
		}
	}
	printf("\nPROVIDED STRING HAS:-\n  Number of Alphabets = %d \n Number of Digits = %d \n Number of Special Charactor = %d\n",Albts,Digits,Spcl_Chtrs);
}

