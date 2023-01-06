/*TO INSERT ONE ELEMENT TO AN ARRAY*/

#include<stdio.h>

void main()
{
        int A[10],i,Lmt,Position,Item;
        printf("Enter the limit\n");
        scanf("%d",&Lmt);
        printf("\nEnter elements to array\n");
        for(i=0;i<Lmt-1;i++)
        {
                scanf("%d",&A[i]);
        }
        printf("\nEntered elements to array\n");
        for(i=0;i<Lmt-1;i++)
        {
                printf("%d\t",A[i]);
        }
	printf("\nEnter the element to be inserted\n");
	scanf("%d",&Item);
	printf("\nEnter the position where to insert\n");
	scanf("%d",&Position);
        for(i=0;i<Lmt-1;i++)
        {
                if(i == Position)
		{
			printf("%d\t",Item);
		}
		printf("%d\t",A[i]);

        }
        /*for(i=Lmt-1;i>=Position-1;i--)
        {
                A[i+1] = A[i];
        }
	A[Position]=Item;
	printf("\nArray after insersion\n");
	for(i=0;i<=Lmt;i++)
	{
		printf("%d\t",A[i]);
	}*/
}


