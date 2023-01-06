#include<stdio.h>

void main()
{
/*	int Num1,Num2;
	typedef int T_int;
        Num1=9;
	Num2=8;
	T_int Temp1,Temp2;
	Temp1=19;
	Temp2=87;
	printf("Num1=%d,Num2=%d,Temp1=%d,Temp2=%d\n",Num1,Num2,Temp1,Temp2);
*/
        
        typedef int Sum;
        int Num1,Num2;
        printf("Enter Two numbers\n");
        scanf("%d%d",&Num1,&Num2);
        Sum Sum_Rslt;
        Sum_Rslt= Num1 + Num2;
        printf("SUM OF %d and %d is %d\n",Num1,Num2,Sum_Rslt);	
}
