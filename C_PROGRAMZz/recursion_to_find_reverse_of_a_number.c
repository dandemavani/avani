/*TO FIND REVERSE OF A NUMBER USING RECURSION*/

#include <stdio.h>

int Reverse(int,int);

void main()
{
    int Nmbr,Revse;
    Revse = 0;
    printf("Enter the Number\n");
    scanf("%d",&Nmbr);
    printf("\nEntered Number :- %d\n",Nmbr);
    printf("\nReversed Number = %d\n",Reverse(Nmbr,Revse));
}

int Reverse(int Num,int Rev)
{
    if(Num > 0)
    {
        Rev = (Rev * 10) + (Num % 10);
        Reverse(Num/10,Rev);
    }
    else
    {
        return(Rev);
    }

}
