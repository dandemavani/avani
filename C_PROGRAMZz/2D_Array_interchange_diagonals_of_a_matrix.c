/*TO INTERCHANGE DIAGONAL ELEMENTS OF A MATRIX*/

#include<stdio.h>

void main()
{
        int A[20][20],B[20][20] = {0},C[20][20] = {0},i,j,Cnt;
        printf("Enter the  count\n");
        scanf("%d",&Cnt);
        printf("\n Enter elements to arry\n");
        for(i=0;i<Cnt;i++)
        {
                for(j=0;j<Cnt;j++)
                {
                        scanf("%d",&A[i][j]);
                }
        }
        printf("\nArray elements\n");
        for(i=0;i<Cnt;i++)
        {
                for(j=0;j<Cnt;j++)
                {
                        printf("%d\t",A[i][j]);
                }
                printf("\n");
        }
        for(i=0;i<Cnt;i++)
        {
            for(j=0;j<Cnt;j++)
            {
                if((i == j))
                {
                    B[i][j] = A[i][Cnt - (i+1)];
                    C[i][j] =A[i][j];
                    A[i][j] = B[i][j];
                    A[i][Cnt-(i+1)] = C[i][j];
                }
            }
        }
        printf("\n ARRAY AFTER DIAGONAL INTERCHANGE\n");
        for(i=0;i<Cnt;i++)
        {
            for(j=0;j<Cnt;j++)
            {
                printf("%d\t",A[i][j]);
            }
            printf("\n");
        }

}
