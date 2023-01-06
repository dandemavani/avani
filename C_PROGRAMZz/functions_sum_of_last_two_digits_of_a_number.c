/*sum of last 2 digits of a number*/

#include<stdio.h>

int Sum_2_digits(int);
int Last_digit(int);
int Second_Last_digit(int);

void main()
{
    int Nmbr,Sum = 0 ;
    printf("Enter the number\n");
    scanf("%d",&Nmbr);
    Sum = Sum_2_digits(Nmbr);
    printf("Sum of Last 2 digits =%d\n",Sum);
}

int Sum_2_digits(int Num)
{
    int Sum = Last_digit(Num) + Second_Last_digit(Num);
    return(Sum);
}

int Last_digit(int Num)
{
    return(Num % 10);
}

int Second_Last_digit(int Num)
{
    return((Num / 10) % 10);
}
