/*PROGRAM TO FIND Nth TERM IN FIBINOCCI TERMS*/

#include<stdio.h>

int Fibinocci(int,int,int,int);

void main()
{
    int a,b,Lmt,Sum;
    a = Sum = 0;
    b = 1;
    printf("Enter the Limit\n");
    scanf("%d",&Lmt);
    printf("%dth Fibinocci Term is %d\n",Lmt,Fibinocci(a,b,Lmt,Sum));
}

int Fibinocci(int a,int b,int Lmt,int Sum)
{
    if(Lmt >1)
    {
        Sum = a + b;
        a = b;
        b = Sum;
        Fibinocci(a,b,(Lmt - 1),Sum);
    }
    else
    {
        return(Sum);
    }
}
