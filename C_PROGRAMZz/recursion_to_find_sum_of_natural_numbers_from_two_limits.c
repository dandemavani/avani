/*TO FIND SUM OF NATURAL NUMBERS FROM 1TO N*/

#include<stdio.h>

int Sum_of_Nos(int,int,int);

void main()
{
    int S_L,E_L,Sum = 0;
    printf("Enter the Starting and Ending limit accordingly\n");
    scanf("%d%d",&S_L,&E_L);
    printf("\nSum of %d to %d natural numbers is %d\n",S_L,E_L,Sum_of_Nos(S_L,E_L,Sum));
}

int Sum_of_Nos(int Sl,int El,int Sum)
{
    if(Sl <= El)
    {
      Sum = Sum + Sl;
      Sum_of_Nos((Sl+1),El,Sum);
    }
    else
    {
        return(Sum);
    }
}
