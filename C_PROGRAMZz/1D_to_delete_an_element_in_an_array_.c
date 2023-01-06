/*TO DELETE AN ITEM ON SPECIFIED LOCATION*/

#include<stdio.h>

void main()
{
	int A[10],i,j,Lmt,Position;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	printf("\nEnter the elements to array\n");
	for(i=0;i<Lmt;i++)
	{
		scanf("%d",&A[i]);
	}
        printf("\nEntered the elements to array\n");
        for(i=0;i<Lmt;i++)
        {
                printf("%d",A[i]);
        }
	printf("\nEnter the position where the element want to be deleted\n");
	scanf("%d",&Position);
	printf("\nArray after deletion\n");
	/*for(i=0;i<Lmt;i++)
	{
		if(i==Position)
		{
			continue;
		}
		printf("%d\t",A[i]);
	}*/
	for(i=Position;i<=Lmt-1;i++)
	{
		A[i-1]=A[i];
	}
	printf("\nArray after deletion\n");
	for(i=0;i<Lmt-1;i++)
	{
		printf("%d\t",A[i]);
	}
}


