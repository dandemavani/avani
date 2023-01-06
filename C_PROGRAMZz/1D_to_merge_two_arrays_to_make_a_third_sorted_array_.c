/*TO MERGE TWO ARRAYS AND MAKE A THIRD SORTED ARRAY*/

#include<stdio.h>

void main()
{
	int A[10],B[10],C[20],i,j,k,Size_1,Size_2,Size_3,Temp;
	printf("Enter size of first array\n");
	scanf("%d",&Size_1);
	printf("\n Enter elements to First array\n");
	for(i=0;i<Size_1;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("\n Entered elements to First array\n");
        for(i=0;i<Size_1;i++)
        {
                printf("%d\t",A[i]);
        }
	printf("\nEnter size of second array\n");
        scanf("%d",&Size_2);
        printf("\n Enter elements to Second array\n");
        for(i=0;i<Size_2;i++)
        {
                scanf("%d",&B[i]);
        }
        printf("\n Entered elements to Second array\n");
        for(i=0;i<Size_2;i++)
        {
                printf("%d\t",B[i]);
        }
	Size_3 = Size_1 + Size_2;
	for(i=0;i<Size_1;i++)
	{
		C[i]=A[i];
	}
	for(i=0,k=Size_1;i<Size_2;i++)
	{
		C[i+k]=B[i];
	}
	Size_3 = Size_1 + Size_2;
	for(i=0;i<Size_3;i++)
	{
		for(j=i+1;j<Size_3;j++)
		{
			if(C[i] > C[j])
			{
			     Temp = C[i];
			     C[i] = C[j];
			     C[j] = Temp;
		        }
		}
	}
	printf("\nMerged array \n");
	for(i=0;i<Size_3;i++)
	{
		printf("%d\t",C[i]);
	}
}

