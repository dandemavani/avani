/*TO CONVERT UPPERCASE TO LOWER CASE and VICEVERSA*/

#include<stdio.h>

void main()
{
        char A[10];
        int i;
        printf("Enter string\n");
        scanf("%s",A);
        printf("Entered string is : %s",A);
        for(i=0;A[i] != '\0';i++)
        {
                if(A[i] >= 'A' && A[i] <= 'Z')
                {
                        A[i] = A[i] + 32;
                }
		else if(A[i] >= 'a' && A[i] <= 'z')
		{
			A[i] = A[i] - 32;
		}
        }
        printf("\nARRAY After Arrangement :%s",A);
}

 
