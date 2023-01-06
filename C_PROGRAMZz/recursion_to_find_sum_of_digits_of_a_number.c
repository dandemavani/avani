/*TO FIND SUM OF DIGITS OF A NUMBER\N*/

#include <stdio.h>

int Sum_of_Digits(int,int);

void main()
{
    int Nmbr,Sum;
    Sum = 0;
    printf("\nEnter the Number\n");
    scanf("%d",&Nmbr);
    printf("\nSum of Digits of %d is %d\n",Nmbr,Sum_of_Digits(Nmbr,Sum));
}

int Sum_of_Digits(int Nmbr,int Sum)
{
    if(Nmbr > 0)
    {
        Sum = Sum + (Nmbr % 10);
        Sum_of_Digits(Nmbr/10,Sum);
    }
    else
    {
        return(Sum);
    }
}
