/*POWER OF A NUMBER*/

#include<stdio.h>

int Power(int,int,int);

void main()
{
    int Base,Pwr,Temp;
    Temp = 1;
    printf("Enter the Base number and Power respectively\n");
    scanf("%d%d",&Base,&Pwr);
    printf("%d ^ %d = %d\n",Base,Pwr,Power(Base,Pwr,Temp));
}

int Power(int B,int P,int R)
{
    if(P>=1)
    {
        R = R * B;
        Power(B,(P-1),R);

    }
    else
    {
       return(R);
    }
}
