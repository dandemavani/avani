/*TO FIND LAST OCCURANCE OF A CHARACTOR IN A STRING*/

#include<stdio.h>

void main()
{
        char A[20],Ch;
        int i,Last,Flag;
	Last = Flag = 0;
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
                        Last = i;
			Flag++;
                }
        }
        if(Flag != 0)
        {
                printf("%c finds first in %dth location of string\n",Ch,Last+1);
        }
        else
        {
                printf("%c is not there in the provided string\n",Ch);
        }
}

