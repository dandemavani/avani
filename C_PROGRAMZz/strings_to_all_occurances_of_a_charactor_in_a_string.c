/*TO FIND ALL OCCURANCES OF A CHARACTOR IN A STRING*/

#include <stdio.h>

void main()
{
    char A[20],Item;
    int B[20],i,k,Count = 0;
    printf("Enter the string\n");
    scanf("%[^\n]",A);
    printf("\nEntered string:");
    puts(A);
    getchar();
    printf("\nEnter the charactor that you want to search\n");
    scanf("%c",&Item);
    //printf("%c occured in following indeces of string:-",Item);
    for(i=0;A[i] != '\0';i++)
    {
        if(A[i] == Item)
        {
            B[k] = i;
            k++;
            Count++;
        }
    }
    if(Count == 0)
    {
        printf("\nSorry the charactor you enetered is not there in the string provided!.....\n");
    }
    else
    {
        for(k=0;k<Count;k++)
        {
            printf("%d\t",B[k]);
        }
    }
}
