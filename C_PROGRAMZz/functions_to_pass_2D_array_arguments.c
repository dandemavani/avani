/*TO PASS 2D ARRAY AS ARGUMENTS*/

#include<stdio.h>
#define N 10

void Add(int[][N],int[][N],int);

void main()
{
    int A[10][10],B[10][10],i,j,Size;
    printf("Enter the size of array\n");
    scanf("%d",&Size);
    printf("\nEnter elements to first array\n");
    for(i=0;i<Size;i++)
    {
        for(j=0;j<Size;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nEnter elements to second array\n");
    for(i=0;i<Size;i++)
    {
        for(j=0;j<Size;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    Add(A,B,Size);
}

void Add(int A[][N],int B[][N],int S)
{
    int i,j,C[10][10];
    printf("\nFirst array\n");
    for(i=0;i<S;i++)
    {
        for(j=0;j<S;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond array\n");
    for(i=0;i<S;i++)
    {
        for(j=0;j<S;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<S;i++)
    {
        for(j=0;j<S;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nSum of 2 Matrices\n");
    for(i=0;i<S;i++)
    {
        for(j=0;j<S;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

}
