/*TO COUNT NUMBER OF VOWEL AND CONSONENTS IN A STRING*/
#include<stdio.h>

void main()
{
	char A[100];
        int i,Vowel,Consenent,Spctrs;
	Vowel = Consenent = 0;
        printf("Enter the string\n");
        scanf("%[^\n]",A);
        printf("\nEntered string:%s",A);
        for(i=0;A[i] != '\0';i++)
        {
		if((A[i] >= 'a' && A[i] <= 'z') || (A[i] >= 'A' && A[i] <= 'Z'))
		{
                	if(A[i] == 'a' || A[i] == 'A' || A[i] == 'e' || A[i] == 'E' || A[i] == 'i' || A[i] == 'I' || A[i] == 'o' || A[i] == 'O' || A[i] == 'u' || A[i] == 'U')
                	{
                        	Vowel++;
                	}
                	else
                	{
                        	Consenent++;
        		}
        	}
	}
        printf("\nNumber Vowel in the provided string:%d",Vowel);
        printf("\nNumber of Consonents in the provided string:%d",Consenent);

}

