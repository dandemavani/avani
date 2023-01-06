/*TO CHECK WHETHER ENETRED MATRIX IS UPPER TRIANGULAR OR NOT*/

#include<stdio.h>

void main()
{
        int A[20][20],i,j,Cnt,Flag = 0,Sum = 0;
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
                if(j < i)
                {
                    if(A[i][j] != 0)
                    {
                            Flag++;
                    }
                }

            }
        }
        if(Flag == 0)
        {
                for(i=0;i<Cnt;i++)
		{
			for(j=0;j<Cnt;j++)
			{
				if(i < j)
				{
					Sum = Sum + A[i][j];
				}
			}
		}
		printf("Sum of Upper Triangular matrix = %d\n",Sum);
        }
        else
        {
                printf("\nMatrix is Not-Upper Triangular\n");
        }
}

