/*TO FIND DETERMINENT OF A MATRIX*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
        int A[3][3],i,j,Dtmt = 0,Cnt;
        printf("Enter the  count\n");
        scanf("%d",&Cnt);
        if(Cnt > 3)
        {
            printf("\nSorry...you eneterd higher order\n");
            exit(0);
        }
        else
        {
            printf("\nEnter elements to matrix\n");
            for(i=0;i<Cnt;i++)
            {
                for(j=0;j<Cnt;j++)
                {
                    scanf("%d",&A[i][j]);
                }
            }
            if(Cnt <= 1)
            {
                for(i=0;i<Cnt;i++)
                {
                    for(j=0;j<Cnt;j++)
                    {
                        printf("Determent =%d\n",A[i][j]);
                    }
                }

            }
            else if(Cnt == 2)
            {
                for(i=0;i<Cnt;i++)
                {
                    for(j=0;j<Cnt;j++)
                    {
                        Dtmt = (A[0][0] * A[Cnt-1][Cnt-1]) - (A[0][Cnt-1] * A[Cnt - 1][0]);
                    }
                }
                printf("\nDeterminant of %d  X %d matrix is %d\n",Cnt,Cnt,Dtmt);
            }
            else
            {
                Dtmt = Dtmt + A[0][0]*((A[1][1]*A[2][2]) - (A[1][2]*A[2][1]));
                Dtmt = Dtmt + (-1)*A[0][1]*((A[1][0]*A[2][2]) - (A[2][0]*A[1][2]));
                Dtmt = Dtmt+ A[0][2]*((A[1][0]*A[2][1]) - (A[1][1]*A[2][0]));
                printf("\nDeterminent of %d x %d matrix is %d\n",Cnt,Cnt,Dtmt);
            }
        }

    return 0;
}

