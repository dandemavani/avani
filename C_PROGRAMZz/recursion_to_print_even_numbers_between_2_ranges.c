/*TO PRINT EVEN NUMBERS USING RECURSION B/W 2 LIMITS*/

#include<stdio.h>

void Check(int,int);

void main()
{
    int A[10],i,S_L,L_L;
    printf("\nEnter starting limit and last limit array\n");
    scanf("%d%d",&S_L,&L_L);
    printf("\nEven numbers :-");
    Check(S_L,L_L);
}

void Check(int Sl,int Ll)
{
    if(Sl <= Ll)
    {
        if( Sl % 2 ==0)
        {
            printf("%d\t",Sl);

        }
        Check((Sl+1),Ll);
    }
}
