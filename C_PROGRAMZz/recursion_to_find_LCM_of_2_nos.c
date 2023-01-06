/*TO FIND LCM OF 2 NOS*/

#include<stdio.h>

int LCM(int,int,int);

void main()
{
    int Num_1,Num_2,Min;
    printf("Enter the 2 Numbers accordingly\n");
    scanf("%d%d",&Num_1,&Num_2);
    Min = (Num_1 < Num_2) ? Num_1 : Num_2;
    printf("\nLCM of %d and %d is %d",Num_1,Num_2,LCM(Num_1,Num_2,Min));

}

int LCM(int Num_1,int Num_2,int Min)
{
    int Lcm = 0;
    if(Num_1 % Min == 0 && Num_2 % Min == 0)
    {
        return((Num_1 * Num_2) / Min);

    }
    else
    {
        LCM(Num_1,Num_2,(Min-1));

    }
}
