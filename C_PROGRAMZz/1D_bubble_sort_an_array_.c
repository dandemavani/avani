/*TO ASCENDING /DESCENDING ORDER SORT USING BUBBLE SORT*/

#include<stdio.h>

void main()
{		//Ascending order
/*	int A[10],i,j,Lmt,Temp;
	printf("Enter the limit\n");
	scanf("%d",&Lmt);
	printf("\nEnter the unsorted elements to array\n");
	for(i=0;i<Lmt;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\nEntered array before sorting\n");
	for(i=0;i<Lmt;i++)
	{
		printf("%d\t",A[i]);
	}
	for(i=0;i<Lmt;i++)
	{
		for(j=i+1;j<Lmt;j++)
		{
			if(A[i] > A[j])
			{
				Temp = A[i];
				A[i] = A[j];
				A[j] = Temp;
			}
		}
	}
	printf("\n Array after sorting\n");
	for(i=0;i<Lmt;i++)
	{
		printf("%d\t",A[i]);
	}
*/
	//Descending order
	int A[10],i,j,Lmt,Temp;
        printf("Enter the limit\n");
        scanf("%d",&Lmt);
        printf("\nEnter the unsorted elements to array\n");
        for(i=0;i<Lmt;i++)
        {
                scanf("%d",&A[i]);
        }
        printf("\nEntered array before sorting\n");
        for(i=0;i<Lmt;i++)
        {
                printf("%d\t",A[i]);
        }
        for(i=0;i<Lmt;i++)
        {
                for(j=i+1;j<Lmt;j++)
                {
                        if(A[i] < A[j])
                        {
                                Temp = A[i];
                                A[i] = A[j];
                                A[j] = Temp;
                        }
                }
        }
        printf("\n Array after sorting\n");
        for(i=0;i<Lmt;i++)
        {
                printf("%d\t",A[i]);
        }

}
