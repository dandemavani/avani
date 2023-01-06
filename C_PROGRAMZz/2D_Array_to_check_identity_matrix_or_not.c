/*To CHCK ENTERED MATRIX IS UNIT MATRIX OR NOT*/

#include <stdio.h>

int main()
{
    int A[10][10],i,Cnt,j,Flag_1,Flag_2;
    Flag_1 = Flag_2 = 0;
    printf("Enter the row count or colomn count\n");
    scanf("%d",&Cnt);
    printf("\nEnter elements to array\n");
    for(i=0;i<Cnt;i++)
    {
        for(j=0;j<Cnt;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nEntered elements to array\n");
    for(i=0;i<Cnt;i++)
    {
        for(j=0;j<Cnt;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<Cnt;i++)
    {
        for(j=0;j<Cnt;j++)
        {
            if(i == j && A[i][j] != 1)
            {
                Flag_1++;
            }
            else if(i != j && A[i][j] != 0)
            {
                Flag_2++;
            }
        }
    }
    if((Flag_1 == 0) && (Flag_2 == 0))
    {
        printf("matrix is identity\n");
        
    }
    else
    {
        printf("\nmatrix is not identity\n");
    }

    return 0;
}

