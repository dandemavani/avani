/*TO COUNT OCCURANCES OF A CHARACTOR IN A STRING*/

#include <stdio.h>

void main()
{
    char A[20],Item;
    int i,Count = 0;
    printf("Enter the string\n");
    scanf("%[^\n]",A);
    printf("\nEntered string:");
    puts(A);
    getchar();
    printf("\nEnter the charactor that you want to search\n");
    scanf("%c",&Item);
    for(i=0;A[i] != '\0';i++)
    {
        if(A[i] == Item)
        {
            Count++;
        }
    }
    if(Count == 0)
    {
        printf("\nSorry the charactor you enetered is not there in the string provided!.....\n");
    }
    else
    {
         printf("%c presents %d times in the given string\n",Item,Count);
    }
}
