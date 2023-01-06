/*PROGRAM TO LEFT ROTATE AN ARRAY*/

#include <stdio.h>

int main()
{
    int A[10],Size,Temp=0,Rte,i,j;
    printf("\nEnter the size of array\n");
    scanf("%d",&Size);
    printf("\nEnter element to array\n");
    for(i=0;i<Size;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\nEntered array before rotation\n");
    for(i=0;i<Size;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\nEnter the number of times you want to rotate\n");
    scanf("%d",&Rte);
    for(j=0;j<Rte;j++)
    {
        Temp = A[0];
        for(i=0;i<Size;i++)
        {
            if(i==(Size-1))
            {
                A[i] = Temp;
            }
            else
            {
               A[i] = A[i+1];
            }
        }
    }
    printf("\nArray after %d times rotation is as follows\n",Rte);
    for(i=0;i<Size;i++)
    {
        printf("%d\t",A[i]);
    }
    return 0;
}

