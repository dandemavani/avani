/*TO FIND FACTORIAL OF A NUMBER*/

#include <stdio.h>

int Fact(int Nmbr,int Fct);

void main()
{
    int Nmbr,Fct;
    Fct = 1;
    printf("Enter the number\n");
    scanf("%d",&Nmbr);
    printf("\nFactorial of %d is %d\n",Nmbr,Fact(Nmbr,Fct));
}

int Fact(int Nmbr,int Fct)
{
    if(Nmbr > 0)
    {
        Fct = Fct + (Nmbr * Fact((Nmbr - 1),Fct));
    }
    else
    {
        return(Fct);
    }
}
