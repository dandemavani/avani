/*TO CHECK NUMBER IS PALINDROME OR NOT USING RECURSION*/

#include <stdio.h>

int Palindrome(int,int,int);

void main()
{
    int Nmbr,Revse,Temp,X;
    Revse = 0;
    printf("Enter the Number\n");
    scanf("%d",&Nmbr);
    Temp = Nmbr;
    X = Palindrome(Nmbr,Temp,Revse);
    if(X == 1)
    {
        printf("\nNumber is Palindrome\n");
    }
    else
    {
        printf("\nNumber is Non-Palindrome\n");
    }
}

int Palindrome(int Num,int Temp,int Rev)
{
    if(Num > 0)
    {
        Rev = (Rev * 10) + (Num % 10);
        Palindrome(Num/10,Temp,Rev);
    }
    else
    {
        printf("\nReversed Number :- %d\n",Rev);
        if(Temp == Rev)
        {
            return(1);
        }
        else
        {
            return(0);
        }
    }

}
