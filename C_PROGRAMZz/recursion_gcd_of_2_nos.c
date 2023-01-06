/*GCD OF 2 NO.S USING RECURSION*/

#include<stdio.h>

int GCD(int,int,int);

void main()
{
    int Num1,Num2,Min;
    printf("Enter two elements\n");
    scanf("%d%d",&Num1,&Num2);
    Min = (Num1 < Num2) ? Num1 :Num2;
    printf("\nHCF of %d and %d is %d\n",Num1,Num2,GCD(Num1,Num2,Min));
}

int GCD(int N1,int N2,int Min)
{
        if(N1 % Min == 0 && N2 % Min == 0)
        {
           return(Min);
        }
        else
        {
             GCD(N1,N2,Min-1);


        }

}
