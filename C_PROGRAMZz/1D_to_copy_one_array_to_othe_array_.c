/*TO COPY ONE ARRAY ELEMENTS TO OTHER ARRAY*/

#include<stdio.h>

void amin()
{
	int A[10],B[10],i,Lmt;
        printf("Enter the limit\n");
        scanf("%d",&Lmt);
        printf("\nEnter elements to array\n");
        for(i=0;i<Lmt;i++)
        {
                scanf("%d",&A[i]);
        }
        printf("\nEntered elements to array\n");
        for(i=0;i<Lmt;i++)
        {
                printf("%d\t",A[i]);
        }
        for(i=0;i<Lmt;i++)
        {
		B[i] = A[i];
	}
	printf("\n Copied array\n");
	for(i=0;i<Lmt;i++)
	{
		printf("%d\t",B[i]);
	}
}


